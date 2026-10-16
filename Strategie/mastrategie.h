#ifndef MASTRATEGIE_H
#define MASTRATEGIE_H

#include "strategie.h"
#include "comportement.h"

class MaStrategie : public Strategie
{
    Q_OBJECT
public:
    explicit MaStrategie(Materiel &_materiel);
    static constexpr int SEUIL_STOP = 20; //cm?
public slots:
    void process() override;
private slots:
    // Active le comportement correspondant à l'état annoncé par changeState
    void appliquerEtat(EtatVoiture etat);
private:
    EtatVoiture  etatCourant;
    Comportement *comportementStop;
    Comportement *comportementSuivreBord;
    Comportement *comportementCourant;
};

#endif // MASTRATEGIE_H
