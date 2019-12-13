#include "Glace.hh"
#include <time.h>

Glace::Glace(int vieMax){
  vieMax = vieMax;
  vie = vieMax;
  faiblesse = FEU;
  force = GLACE;
  couleur = "BLEUE";
  fum = new FumeeBleue();
}

Glace::Glace(){
  srand (time(NULL));
  vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  vie = vieMax;
  faiblesse = FEU;
  force = GLACE;
  couleur = "BLEUE";
  fum = new FumeeBleue();
}

void Glace::attaque(Joueur a){

}
