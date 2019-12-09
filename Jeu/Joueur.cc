#include "Joueur.hh"
#include <time.h>
#include <ostream>
#include <list>

Joueur::Joueur(){
  srand (time(NULL));
  vieMax = (100 + (int) rand() /(int) RAND_MAX * (100));
  vie = vieMax;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  S = PHYSIQUE;
}

Joueur::Joueur(int viemax){
  srand (time(NULL));
  viemax = viemax;
  vie = viemax;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  S = PHYSIQUE;
}
