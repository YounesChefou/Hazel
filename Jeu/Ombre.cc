#include "Ombre.hh"
#include <time.h>

Ombre::Ombre(int vieMax){
  vieMax = vieMax;
  vie = vieMax;
  faiblesse = SOIN;
  force = PHYSIQUE;
  couleur = "NOIRE";
  fum = new FumeeNoire(); //Plus puissante que la fumée du monstre basic
}

Ombre::Ombre(){
  srand (time(NULL));
  vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  vie = vieMax;
  faiblesse = SOIN;
  force = PHYSIQUE;
  couleur = "NOIRE";
  fum = new FumeeNoire();
}

void Ombre::attaque(Joueur a){

}
