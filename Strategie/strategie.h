#ifndef STRATEGIE_H
#define STRATEGIE_H
#include <QObject>
#include <array>
#include "materiel.h"

enum class EtatVoiture {
    Stop,
    SuivreBord
};

class Strategie : public QObject
{
    Q_OBJECT
public:
    explicit Strategie(Materiel &_materiel);
public slots:
    virtual void process()=0;
signals:
    void changeState(EtatVoiture newState);
protected:
    Materiel &materiel;
    array<int, 360>distanceLidar;
};

#endif // STRATEGIE_H
