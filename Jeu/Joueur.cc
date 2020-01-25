#include "Joueur.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <ostream>
#include <sstream>
#include <list>
#include <ctime>
#include <chrono>

Statut Joueur::elements[] = {PHYSIQUE, FEU, SOIN, POISON, GLACE};

Joueur::Joueur():Personnage(200), manaMax(75), mana(75), typeAttaque(0), godMode(false){
  // vie = 50;
  // manaMax = (75 + (int) rand() /(int) RAND_MAX * (50));
  // mana = manaMax;
  // typeAttaque = 0;
  // godMode = false;
}

//Constructeur de Joueur
Joueur::Joueur(int v, int m):Personnage(v){
  vieMax = 150;
  manaMax = 75;
  mana = m;
  typeAttaque = 0;
  transforme = false;
  godMode = false;
}

//Permet au Joueur d'attaquer le Monstre M
//Si le joueur utilise SOIN, le monstre recupère 20 pts de vie
//Si le joueur utilise une attaque correspondante à la force du Monstre, alors
//le monstre recupère 2 pts de vie, si l'attaque correspond à sa faiblesse, 60 pts de vie
//Si elle ne correspond à aucun des deux, 20 pts de vie
void Joueur::attaque(int force, int faiblesse, Personnage *p){
    if(SOIN == getAttaque()){
        //if(getElement() == SOIN){
            p->recupVie(20);
        }
        else if(force == getAttaque()){
        //else if(getElement() == M->getForce()){
            std::cout << "L'attaque n'est pas très efficace..." << std::endl;
            p->recupVie(5);
        }
        else if(faiblesse == getAttaque()){
        //else if(getElement() == M->getFaiblesse()){
            std::cout << "L'attaque est très efficace !" << std::endl;
            p->perdVie(60);
        }
        else{
            std::cout << "L'attaque est normale." << std::endl;
            p->perdVie(20);
        }

   // std::cout << p->toString() << std::endl;
}

//    if(SOIN == getAttaque()){
//    //if(getElement() == SOIN){
//        M->recupVie(20);
//    }
//    else if(M->getForce() == getAttaque()){
//    //else if(getElement() == M->getForce()){
//        std::cout << "L'attaque n'est pas très efficace..." << std::endl;
//        M->recupVie(5);
//    }
//    else if(M->getFaiblesse() == getAttaque()){
//    //else if(getElement() == M->getFaiblesse()){
//        std::cout << "L'attaque est très efficace !" << std::endl;
//        M->perdVie(60);
//    }
//    else{
//        std::cout << "L'attaque est normale." << std::endl;
//        M->perdVie(20);
//    }

//    std::cout << M->toString() << std::endl;
//}

//Permet au joueur de changer le type d'élèment selectionné actuellement
void Joueur::changerElement(){
    typeAttaque++;
    if(typeAttaque >= 5) typeAttaque = 0;
}

////Renvoie True si le joueur est mort et False sinon
//bool Joueur::estMort()
//{
//    if(vie <= 0) return true;

//    return false;
//}

//Le joueur choisit le type de pouvoir qu'il souhaite avoir et ensuite
//se transforme, toutes les secondes, sa mana va graduellement descendre
//Quand sa mana tombe à zéro ou qu'il décide de se detransformer =
void Joueur::transformation(){
    transforme == true ? transforme = false : transforme = true;
}

//Pas forcément super efficace, bloque le jeu si temps d'invincibilité trop long
void Joueur::invincibilite(){
    if(godMode == false){
        godMode = true;
        for(auto restUntil = std::chrono::system_clock::now() + std::chrono::milliseconds(5); std::chrono::system_clock::now() < restUntil;){
            std::cout << "Invincible" << std::endl;
        }
        godMode = false;
    }
    //godMode == true ? godMode = false : godMode = true;
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
        this->setMana(manaMax);
    }
}

std::string Joueur::toString(){
    std::stringstream str;
    str << "=========================" << std::endl;
    str << "PV: " << vie << " / " << vieMax << std::endl;
    str << "PM: " << mana << " / " << manaMax << std::endl;
    str << "=========================" << std::endl;
    return str.str();
}
