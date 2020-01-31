#include "Ombre.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <sstream>

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

std::string Ombre::toString()
    {
        std::stringstream str;
        str << "=========================" << std::endl;
        str << "L'ennemi Ombre a " << vie << " sur " << vieMax << std::endl;
        str << "Force : " << force << std::endl;
        str << "Faiblesse : " << faiblesse << std::endl;
        str << "=========================" << std::endl;
        return str.str();
    }
