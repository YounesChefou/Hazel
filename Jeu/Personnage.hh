#include <iostream>

#ifndef PERSONNAGE_HH
#define PERSONNAGE_HH

typedef enum {PHYSIQUE, FEU, POISON, SOIN, GLACE} Statut;
class Personnage{
    protected:
    int vie;
    int vieMax;
}
