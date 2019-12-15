#include "Glace.hh"
#include <time.h>

Glace::Glace(int vieMax){
  vieMax = vieMax;
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

void Glace::attaque(Personnage a){

}
