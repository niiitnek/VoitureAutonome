#ifndef MATERIELREEL_H
#define MATERIELREEL_H

#include "materiel.h"
#include <QSerialPort>
#include <QByteArray>
#include <QString>

// Classe FILLE : matériel qui communique avec la vraie voiture
//  - un port série pour le lidar (réception des distances)
//  - un port série pour les moteurs (envoi vitesse / angle)
class MaterielReel : public Materiel
{
    Q_OBJECT   // obligatoire pour que les slots / signaux fonctionnent
public:
    explicit MaterielReel(const QString &portMoteurs = "/dev/ttyACM0",
                          const QString &portLidar   = "/dev/ttyUSB0");

    // override : remplit la fonction virtuelle pure de Materiel
    void deplacer(double vitesse, double angle) override;

public slots:
    // Appelé à chaque fois que le lidar envoie des octets
    void processLidarDatas();

private:
    QSerialPort serieMoteurs;   // liaison vers le contrôleur des moteurs
    QSerialPort serieLidar;     // liaison vers le lidar
    QByteArray  bufferLidar;    // accumule les octets reçus jusqu'à avoir une trame complète

    bool ouvrirPort(QSerialPort &port, const QString &nom, qint32 baudrate);
    bool traiterTrame(const QByteArray &trame);   // remplit distanceLidar, false si trame invalide
};

#endif // MATERIELREEL_H
