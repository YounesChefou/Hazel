#include "Ombre.hh"
#include <time.h>

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

void Ombre::attaque(Personnage a){

}
