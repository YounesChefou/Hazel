#include "Monstre.hh"
#include "Joueur.hh"
#include <sstream>

Monstre::~Monstre(){}

std::string Monstre::toString()
    {
        std::stringstream str;
        str << "=========================" << std::endl;
        str << "Le monstre a " << vie << " sur " << vieMax << std::endl;
        str << "=========================" << std::endl;
        return str.str();
    }


//Permet au Monstre d'attaquer le joueur j
void Monstre::attaque(Personnage *p){
   Joueur* j = (Joueur*) p;
   if(j->estInvincible()){
       std::cout << "I'M INVINCIBLEEEEE" << std::endl;
       return; //Si le joueur est invincible, le monstre ne peut pas l'attaquer
   }

   if(force == j->getElement()){
        j->perdVie(30);
    }
    else if(faiblesse == j->getElement()){
        j->perdVie(10);
    }
    else{
        j->perdVie(15);
    }
//   switch(j->getElement()){
//       case force:
//            j->perdVie(30);
//            break;
//       case faiblesse:
//            j->perdVie(10);
//            break;
//       default:
//            j->perdVie(15);
//            break;
//   }
}
