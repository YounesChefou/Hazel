#include "Glace.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <sstream>

Glace::Glace(){//:Monstre(200, FEU, GLACE, "BLEUE"){
   srand (time(NULL));
   vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
   vie = vieMax;
   faiblesse = FEU;
   force = GLACE;
   couleur = "BLEUE";
}

Glace::Glace(int v){ //:Monstre(v, FEU, GLACE, "BLEUE"){
   vieMax = v;
   vie = vieMax;
   faiblesse = FEU;
   force = GLACE;
   couleur = "BLEUE";
}

Glace::~Glace(){}

std::string Glace::toString()
    {
        std::stringstream str;
        str << "=========================" << std::endl;
        str << "L'ennemi Glace a " << vie << " sur " << vieMax << std::endl;
        str << "Force : " << force << std::endl;
        str << "Faiblesse : " << faiblesse << std::endl;
        str << "=========================" << std::endl;
        return str.str();
    }
