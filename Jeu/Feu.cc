#include "Feu.hh"
#include "Joueur.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Feu::Feu(int v){
  vieMax = v;
  vie = vieMax;
  faiblesse = GLACE;
  force = FEU;
  strForce = "FEU";
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
    //if(getForce() == j->getElement()){
    if(getForce() == "FEU"){
    // if(1){
        j->perdVie(30);
    }
    else if(getFaiblesse() == j->getElement()){
        j->perdVie(10);
    }
    else{
        j->perdVie(15);
    }
}
