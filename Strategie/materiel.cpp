#include "materiel.h"

Materiel::Materiel()
{
    distanceLidar.fill(0);
}

array<int, 360> &Materiel::getDistancesLidar()
{
    return distanceLidar;
}