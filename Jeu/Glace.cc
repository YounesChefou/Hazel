#include "Glace.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Glace::Glace(int v){
  vieMax = v;
  vie = vieMax;
  faiblesse = FEU;
  force = GLACE;
  couleur = "BLEUE";
}

Glace::Glace(){
  srand (time(NULL));
  vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  vie = vieMax;
  faiblesse = FEU;
  force = GLACE;
  couleur = "BLEUE";
}
