#include "Feu.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Feu::Feu():Monstre(200, GLACE, FEU, "ROUGE"){
  // srand (time(NULL));
  // vieMax = (20 + (int) rand() /(int) RAND_MAX * (20));
  // vieMax = vieMax;
  // vie = vieMax;
  // faiblesse = GLACE;
  // force = FEU;
  // couleur = "ROUGE";
}

Feu::Feu(int v):Monstre(v, GLACE, FEU, "ROUGE"){
  // vieMax = v;
  // vie = vieMax;
  // faiblesse = GLACE;
  // force = FEU;
//  intForce = 1;
//  intFaiblesse = 2;
  // couleur = "ROUGE";
}

Feu::~Feu(){}

//Permet au Monstre d'attaquer le joueur j
//void Feu::attaque(Personnage* p){
//    Joueur* j = (Joueur*) p;
//    if((j->getElement())["FEU"] == j->getAttaque()){
//    //if(j->getElement() == FEU){
//    //if(getForce() == "FEU"){
//    // if(1){
//            j->perdVie(30);
//    }
//    else if((j->getElement())["GLACE"] == j->getAttaque()){
//    //else if(j->getElement() == GLACE){
//        j->perdVie(10);
//    }
//    else{
//        j->perdVie(15);
//    }
//    //}
//}
