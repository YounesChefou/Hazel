#include "Monstre.hh"
#include "Joueur.hh"
#include <sstream>

//Permet au Monstre d'attaquer le joueur j
void Monstre::attaque(Personnage *p){
   Joueur* j = (Joueur*) p;
   if(j->estInvincible()) return; //Si le joueur est invincible, le monstre ne peut pas l'attaquer

   if(force == j->getElement()){
        j->perdVie(30);
    }
    else if(faiblesse == j->getElement()){
        j->perdVie(10);
    }
    else{
        j->perdVie(15);
    }
}

std::string Monstre::toString()
    {
        std::stringstream str;
        str << "=========================" << std::endl;
        str << "L'ennemi a " << vie << " sur " << vieMax << std::endl;
        str << "=========================" << std::endl;
        return str.str();
    }
