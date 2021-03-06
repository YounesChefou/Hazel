#include "Joueur.hh"
#include "Monstre.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <ostream>
#include <sstream>
#include <list>
#include <ctime>
//#include <chrono>

Statut Joueur::elements[] = {PHYSIQUE, GLACE, FEU, POISON, SOIN};

Joueur::Joueur(){ //:Personnage(200), manaMax(75), mana(75), typeAttaque(0), godMode(false){}
    vieMax = 200;
    vie = 200;
    manaMax = 75;
    mana = 75;
    typeAttaque = 0;
    transforme = false;
    godMode = false;
}

//Constructeur de Joueur
Joueur::Joueur(int v, int m){//:Personnage(v){
  vieMax = v;
  vie = vieMax;
  manaMax = 75;
  mana = m;
  typeAttaque = 0;
  transforme = false;
  godMode = false;
}

//Permet au Joueur d'attaquer le Monstre M
//Si le joueur utilise une attaque correspondante à la force du Monstre, alors
//le monstre recupère 2 pts de vie, si l'attaque correspond à sa faiblesse, 60 pts de vie
//Si elle ne correspond à aucun des deux, 20 pts de vie
void Joueur::attaque(Personnage *p){
    Monstre* M = (Monstre*) p;
        if(getElement() == M->getForce()){
            std::cout << "L'attaque n'est pas très efficace... " << getElement() << std::endl;
            p->recupVie(5);
        }
        else if(getElement() == M->getFaiblesse()){
            std::cout << "L'attaque est très efficace !" << getElement() << std::endl;
            p->perdVie(60);
        }
        else{
            std::cout << "L'attaque est normale." << getElement() << std::endl;
            p->perdVie(20);
        }

}

//Permet au joueur de changer le type d'élèment selectionné actuellement
void Joueur::changerElement(){
    typeAttaque++;
    if(typeAttaque >= 5) typeAttaque = 0;
}


//Le joueur choisit le type de pouvoir qu'il souhaite avoir et ensuite
//se transforme, toutes les secondes, sa mana va graduellement descendre
//Quand sa mana tombe à zéro ou qu'il décide de se detransformer =
void Joueur::transformation(){
    if(estTransforme()){
     transforme = false;
    }
    else if(getMana() > 15 && getAttaque() != 0){
        transforme = true;
    }
}

//Pas forcément super efficace, bloque le jeu si temps d'invincibilité trop long
void Joueur::invincibilite(){
    godMode == true ? godMode = false : godMode = true;
}


//Fonction permettant d'ajouter le montant recup à l'attribut mana du joueur
//Si la somme du niveau de mana actuel et de recup donne un nombre supérieur
//au niveau de mana maximum alors on attribue au joueur le taux de points de mana
//maximum possible
void Joueur::recupMana(int recup)
{
    int mana = getMana();
    int manaMax = getManaMax();

    if(mana + recup <= manaMax){
        setMana(mana + recup);
    }
    else{
        setMana(manaMax);
    }
}

//Retourne une chaine de caractères avec des informations sur le joueur
std::string Joueur::toString(){
    std::stringstream str;
    str << "=========================" << std::endl;
    str << "PV: " << vie << " / " << vieMax << std::endl;
    str << "PM: " << mana << " / " << manaMax << std::endl;
    str << "=========================" << std::endl;
    return str.str();
}
