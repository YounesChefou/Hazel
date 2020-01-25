#include "Glace.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Glace::Glace():Monstre(200, FEU, GLACE, "BLEUE"){
  // srand (time(NULL));
  // vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  // vie = vieMax;
  // faiblesse = FEU;
  // force = GLACE;
  // couleur = "BLEUE";
}

Glace::Glace(int v):Monstre(v, FEU, GLACE, "BLEUE"){
  // vieMax = v;
  // vie = vieMax;
  // faiblesse = FEU;
  // force = GLACE;
  // couleur = "BLEUE";
}

Glace::~Glace(){}
