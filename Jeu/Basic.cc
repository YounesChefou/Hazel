#include "Basic.hh"

Basic::Basic(int vieMax){
  vieMax = vieMax;
  vie = vieMax;
  faiblesse = AUCUNE;
  force = AUCUNE;
  couleur = "GRISE";
  fum = new FumeeNoire();
}

Basic::Basic(){
  srand (time(NULL));
  vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  vie = vieMax;
  faiblesse = AUCUNE;
  force = AUCUNE;
  couleur = "GRISE";
  fum = new FumeeNoire();
}

void Basic::attaque(Joueur a){

}
