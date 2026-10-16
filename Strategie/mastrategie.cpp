#include "mastrategie.h"
#include <QDebug>

MaStrategie::MaStrategie(Materiel &_materiel)
        : Strategie(_materiel)
        , etatCourant(EtatVoiture::Stop)

{
    // Les comportements lisent le même tableau lidar que la stratégie
    // comportementStop       = new ComportementStop(distanceLidar, this);
    // comportementSuivreBord = new ComportementSuivreBord(distanceLidar, this);
    comportementCourant    = comportementStop;      // on démarre à l'arrêt

    // Les ordres de déplacement des comportements vont vers le matériel
    connect(comportementStop,       &Comportement::deplacer, &materiel, &Materiel::deplacer);
    connect(comportementSuivreBord, &Comportement::deplacer, &materiel, &Materiel::deplacer);

    // Quand l'état change, on change de comportement
    connect(this, &Strategie::changeState, this, &MaStrategie::appliquerEtat);
}

void MaStrategie::process()
{
    // Obstacle le plus proche dans un cône de 60° devant la voiture
    int devant = distanceMinSecteur(distanceLidar, 0, 30);

    // Si distance trop faible -> Comportement Stop
    // Sinon                   -> Comportement SuivreBord
    EtatVoiture nouvelEtat = (devant < SEUIL_STOP) ? EtatVoiture::Stop
                                                   : EtatVoiture::SuivreBord;

    // On n'émet que lors d'un vrai changement (pas à chaque trame)
    if (nouvelEtat != etatCourant) {
        etatCourant = nouvelEtat;
        emit changeState(etatCourant);
    }

    // Le comportement actif calcule et envoie son ordre au matériel
    comportementCourant->process();
}

void MaStrategie::appliquerEtat(EtatVoiture etat)
{
    switch (etat) {
    case EtatVoiture::Stop:
        comportementCourant = comportementStop;
    break;
    case EtatVoiture::SuivreBord:
        comportementCourant = comportementSuivreBord;
    break;
    }
    qDebug() << "Nouvel état :" << (etat == EtatVoiture::Stop ? "Stop" : "SuivreBord");
}
