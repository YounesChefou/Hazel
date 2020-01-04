#include "Joueur.hh"
#include <time.h>
#include <ostream>
#include <sstream>
#include <list>
#include <ctime>

Statut Joueur::elements[] = {PHYSIQUE, FEU, POISON, SOIN, GLACE};

Joueur::Joueur(){
  srand (time(NULL));
  vieMax = (100 + (int) rand() /(int) RAND_MAX * (100));
  vie = vieMax;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  typeAttaque = 0;
  //initiattaque();
}

Joueur::Joueur(int v){
  srand (time(NULL));
  vieMax = v;
  vie = vieMax;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  typeAttaque = 0;
  transforme = false;
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
    if(elements[typeAttaque] == SOIN){
        M.setVie(2);
    }
    else if(elements[typeAttaque] == M.getFaiblesse()){
        std::cout << "L'attaque n'est pas très efficace..." << std::endl;
        M.setVie(-2);
    }
    else if(elements[typeAttaque] == M.getFaiblesse()){
        std::cout << "L'attaque est très efficace !" << std::endl;
        M.setVie(-15);
    }
    else{
        std::cout << "L'attaque est normale." << std::endl;
        M.setVie(-5);
    }

    std::cout << M.toString() << std::endl;
}

//Permet au joueur de changer le type d'élèment selectionné actuellement
void Joueur::changerElement(){
    typeAttaque++;
    if(typeAttaque >= 5) typeAttaque = 0;
}

SpriteJoueur* Joueur::getSprite(){
    return sprite;
}

//Le joueur choisit le type de pouvoir qu'il souhaite avoir et ensuite
//se transforme, toutes les secondes, sa mana va graduellement descendre
//Quand sa mana tombe à zéro ou qu'il décide de se detransformer =
void Joueur::transformation(){
    transforme = true;
}

void Joueur::detransformation(){
    typeAttaque = 0;
}

std::string Joueur::toString(){
    std::stringstream str;
    str << "=========================" << std::endl;
    str << "Le joueur a " << mana << " en mana." << std::endl;
    str << "Le joueur a " << vie << " sur " << vieMax << std::endl;
    str << "=========================" << std::endl;
    return str.str();
}
