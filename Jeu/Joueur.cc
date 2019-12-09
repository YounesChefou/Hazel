#include "Joueur.hh"
#include <time.h>
#include <ostream>
#include <list>

void Joueur::initiattaque(){
  attaques.push_back(PHYSIQUE);
  attaques.push_back(FEU);
  attaques.push_back(POISON);
  attaques.push_back(SOIN);
  attaques.push_back(GLACE);
}

Joueur::Joueur(){
  srand (time(NULL));
  vieMax = (100 + (int) rand() /(int) RAND_MAX * (100));
  vie = vieMax;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  S = PHYSIQUE;
  initiattaque();
}

Joueur::Joueur(int viemax){
  srand (time(NULL));
  viemax = viemax;
  vie = viemax;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  S = PHYSIQUE;
  initiattaque();
}
