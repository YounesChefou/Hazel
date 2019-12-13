#include "Feu.hh"
#include <time.h>

Feu::Feu(int vieMax){
  vieMax = vieMax;
  vie = vieMax;
  faiblesse = GLACE;
  force = FEU;
  couleur = "ROUGE";
  fum = new FumeeRouge();
}

Feu::Feu(){
  srand (time(NULL));
  vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  vieMax = vieMax;
  vie = vieMax;
  faiblesse = GLACE;
  force = FEU;
  couleur = "ROUGE";
  fum = new FumeeRouge();
}

void Feu::attaque(Joueur a){
  
}
