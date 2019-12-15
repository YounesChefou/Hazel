#include "Feu.hh"
#include <time.h>

Feu::Feu(int vieMax){
  vieMax = vieMax;
  vie = vieMax;
  faiblesse = GLACE;
  force = FEU;
  couleur = "ROUGE";
}

Feu::Feu(){
  srand (time(NULL));
  vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  vieMax = vieMax;
  vie = vieMax;
  faiblesse = GLACE;
  force = FEU;
  couleur = "ROUGE";
}

void Feu::attaque(Personnage a){

}
