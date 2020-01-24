#include "Feu.hh"
#include "Joueur.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Feu::Feu(int v){
  vieMax = v;
  vie = vieMax;
  faiblesse = GLACE;
  force = FEU;
//  intForce = 1;
//  intFaiblesse = 2;
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

//Permet au Monstre d'attaquer le joueur j
void Feu::attaque(Personnage* p){
    Joueur* j = (Joueur*) p;
    if(j->getElement() == FEU){
    //if(getForce() == "FEU"){
    // if(1){
        j->perdVie(30);
    }
    else if(j->getElement() == GLACE){
        j->perdVie(10);
    }
    else{
        j->perdVie(15);
    }
}
