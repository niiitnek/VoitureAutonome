#include "strategie.h"

Strategie::Strategie(Materiel &_materiel)
        : materiel(_materiel)
        , distanceLidar(_materiel.getDistancesLidar())
{
    connect(&materiel, &Materiel::newDistances, this, &Strategie::process);
}

void Strategie::process() {}