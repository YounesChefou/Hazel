#include "Feu.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Feu::Feu(){//:Monstre(200, GLACE, FEU, "ROUGE"){
   srand (time(NULL));
   vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
   vieMax = vieMax;
   vie = vieMax;
   faiblesse = GLACE;
   force = FEU;
   couleur = "ROUGE";
}

Feu::Feu(int v){ //:Monstre(v, GLACE, FEU, "ROUGE"){
   vieMax = v;
   vie = vieMax;
   faiblesse = GLACE;
   force = FEU;
//  intForce = 1;
//  intFaiblesse = 2;
   couleur = "ROUGE";
}

Feu::~Feu(){}

std::string Feu::toString()
    {
        std::stringstream str;
        str << "=========================" << std::endl;
        str << "L'ennemi Glace a " << vie << " sur " << vieMax << std::endl;
        str << "Force : " << force << std::endl;
        str << "Faiblesse : " << faiblesse << std::endl;
        str << "=========================" << std::endl;
        return str.str();
    }
