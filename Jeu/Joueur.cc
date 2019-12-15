#include "Joueur.hh"
#include <time.h>
#include <ostream>
#include <sstream>
#include <list>
#include <ctime>

// void Joueur::initiattaque(){
//   attaques.push_back(PHYSIQUE);
//   attaques.push_back(FEU);
//   attaques.push_back(POISON);
//   attaques.push_back(SOIN);
//   attaques.push_back(GLACE);
// }

Joueur::Joueur(){
  srand (time(NULL));
  vieMax = (100 + (int) rand() /(int) RAND_MAX * (100));
  vie = vieMax;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  element = PHYSIQUE;
  //initiattaque();
}

Joueur::Joueur(int viemax){
  srand (time(NULL));
  viemax = viemax;
  vie = viemax;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  element = PHYSIQUE;
  //initiattaque();
}

void Joueur::recuperation(Vie a){
  vie += a.getrecup();
  if(vie > vieMax){
    vie = vieMax;
  }
}

void Joueur::recuperation(Mana a){
  mana += a.getrecup();
  if(mana > manaMax){
    mana = manaMax;
 }

}

void Joueur::action(Monstre M){
    if(element == SOIN){
        M.setVie(2);
    }
    else if(element == M.getFaiblesse()){
        std::cout << "L'attaque n'est pas très efficace..." << std::endl;
        M.setVie(-2);
    }
    else if(element == M.getFaiblesse()){
        std::cout << "L'attaque est très efficace !" << std::endl;
        M.setVie(-15);
    }
    else{
        std::cout << "L'attaque est normale." << std::endl;
        M.setVie(-5);
    }
}

//Le joueur choisit le type de pouvoir qu'il souhaite avoir et ensuite
//se transforme, toutes les secondes, sa mana va graduellement descendre
//Quand sa mana tombe à zéro ou qu'il décide de se detransformer =
void Joueur::transformation(Statut S){

}

void Joueur::detransformation(){
    element = PHYSIQUE;

}

std::string Joueur::toString(){
    std::stringstream str;
    str << "=========================" << std::endl;
    str << "Le joueur a " << mana << " en mana." << std::endl;
    str << "Le joueur a " << vie << " sur " << vieMax << std::endl;
    str << "=========================" << std::endl;
    return str.str();
}
