#include "Joueur.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <ostream>
#include <sstream>
#include <list>
#include <ctime>

Statut Joueur::elements[] = {PHYSIQUE, GLACE, FEU, POISON, SOIN};

Joueur::Joueur(){
  srand (time(NULL));
  vieMax = 200;
  vie = 50;
  manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  mana = manaMax;
  typeAttaque = 0;
}

Joueur::Joueur(int v){
  srand (time(NULL));
  //vieMax = v;
  vieMax = 150;
  //vie = vieMax;
  vie = v;
  manaMax = 75;
  mana = manaMax;
  typeAttaque = 0;
  transforme = false;
}

// void Joueur::recuperation(Vie a){
//   vie += a.getrecup();
//   if(vie > vieMax){
//     vie = vieMax;
//   }
// }
//
// void Joueur::recuperation(Mana a){
//   mana += a.getrecup();
//   if(mana > manaMax){
//     mana = manaMax;
//  }

void Joueur::action(Monstre* M){
    if(elements[typeAttaque] == SOIN){
        M->setVie(2);
    }
    else if(elements[typeAttaque] == M->getFaiblesse()){
        std::cout << "L'attaque n'est pas très efficace..." << std::endl;
        M->setVie(-2);
    }
    else if(elements[typeAttaque] == M->getFaiblesse()){
        std::cout << "L'attaque est très efficace !" << std::endl;
        M->setVie(-15);
    }
    else{
        std::cout << "L'attaque est normale." << std::endl;
        M->setVie(-5);
    }

    std::cout << M->toString() << std::endl;
}

//Permet au joueur de changer le type d'élèment selectionné actuellement
void Joueur::changerElement(){
    typeAttaque++;
    if(typeAttaque >= 5) typeAttaque = 0;
}

//Renvoie True si le joueur est mort et False sinon
bool Joueur::estMort()
{
    if(vie <= 0) return true;

    return false;
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

//Fonction permettant d'ajouter le montant recup à l'attribut vie du joueur
//Si la somme du niveau de vie actuel et de recup donne un nombre supérieur
//au niveau de vie maximum alors on attribue au joueur le taux de points de vie
//maximum possible
void Joueur::recupVie(int recup)
{
    int vie = this->getVie();
    int vieMax = this->getVieMax();

    if(vie + recup <= vieMax){
        this->setVie(vie + recup);
    }
    else{
        this->setVie(vieMax);
    }
}

//Fonction permettant d'ajouter le montant recup à l'attribut mana du joueur
//Si la somme du niveau de mana actuel et de recup donne un nombre supérieur
//au niveau de mana maximum alors on attribue au joueur le taux de points de mana
//maximum possible
void Joueur::recupMana(int recup)
{
    int mana = this->getMana();
    int manaMax = this->getManaMax();

    if(mana + recup <= manaMax){
        this->setMana(mana + recup);
    }
    else{
        this->setMana(vieMax);
    }
}

std::string Joueur::toString(){
    std::stringstream str;
    str << "=========================" << std::endl;
    str << "Le joueur a " << mana << " en mana." << std::endl;
    str << "Le joueur a " << vie << " sur " << vieMax << std::endl;
    str << "=========================" << std::endl;
    return str.str();
}
