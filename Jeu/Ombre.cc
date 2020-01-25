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

void Ombre::attaque(int attaqueJoueur, Personnage *j){
    switch(attaqueJoueur){
    case SOIN:
        j->perdVie(30);
        break;
    case PHYSIQUE:
        j->perdVie(10);
        break;
    default:
        j->perdVie(15);
        break;
    }
}
