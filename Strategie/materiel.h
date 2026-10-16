#ifndef MATERIEL_H
#define MATERIEL_H

#include <QObject>
#include <array>
// #include "tcpserveur.h"
using namespace std;
class Materiel : public QObject
{
    Q_OBJECT
public:
    explicit Materiel();
    array<int,360> & getDistancesLidar();
public slots:
    virtual void deplacer(double vitesse, double angle)=0;
signals:
    void newDistances();
    void newState(double vitesse, double angle);
protected :
    array<int, 360>distanceLidar;
private:
    // TcpServeur tcpServeur;
};

#endif // MATERIEL_H
