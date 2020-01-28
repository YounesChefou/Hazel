#include "Ombre.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Ombre::Ombre(){//:Monstre(200, SOIN, PHYSIQUE, "NOIRE"){}
    srand (time(NULL));
    vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
    vieMax = vieMax;
    vie = vieMax;
    faiblesse = SOIN;
    force = POISON;
    couleur = "NOIRE";
}

Ombre::Ombre(int v){//:Monstre(v, SOIN, PHYSIQUE, "NOIRE"){}
    vieMax = v;
    vie = vieMax;
    faiblesse = SOIN;
    force = POISON;
    couleur = "NOIRE";
}

Ombre::~Ombre(){}
