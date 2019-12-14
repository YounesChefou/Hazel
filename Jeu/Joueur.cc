#include "Joueur.hh"
#include <time.h>
#include <ostream>
#include <list>
#include

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

void Joueur::action(Monstre M){
    if(element == SOIN){
        M.vie += 2;
    }
    else if(element == M.Force){
        std::cout << "L'attaque n'est pas très efficace..." << std::endl;
        M.vie -= 2;
    }
    else if(element == M.faiblesse){
        std::cout << "L'attaque est très efficace !" << std::endl;
        M.vie -= M.vie*0.07;
    }
    else{
        std::cout << "L'attaque est normale." << std::endl;
        M.vie -= 5;
    }
}

//Le joueur choisit le type de pouvoir qu'il souhaite avoir et ensuite
//se transforme, toutes les secondes, sa mana va graduellement descendre
//Quand sa mana tombe à zéro ou qu'il décide de se detransformer =
void Joueur::transformation(Statut S){

}

void Joueur::detransformation(){
    
}

std::string Joueur::toString(){
    std::stringstream str;
    std::cout << "=========================" << std::endl;
    std::cout << "Le joueur a " << mana << " en mana." << std::endl
    std::cout << "Le joueur a " << vie << " sur " <<< vieMax;
    std::cout << "=========================" << std::endl;
 }
}
