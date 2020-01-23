#include "Ombre.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Ombre::Ombre(int v){
  vieMax = v;
  vie = vieMax;
  faiblesse = SOIN;
  force = PHYSIQUE;
  couleur = "NOIRE";
}

Ombre::Ombre(){
  srand (time(NULL));
  vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  vie = vieMax;
  faiblesse = SOIN;
  force = PHYSIQUE;
  couleur = "NOIRE";
}
