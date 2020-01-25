#include "Monstre.hh"
#include <sstream>

Monstre::~Monstre(){}

std::string Monstre::toString()
    {
        std::stringstream str;
        str << "=========================" << std::endl;
        str << "Le monstre a " << vie << " sur " << vie << std::endl;
        str << "=========================" << std::endl;
        return str.str();
    }


//Permet au Monstre d'attaquer le joueur j
void Monstre::attaque(Personnage *j){
   Joueur* j = (Joueur*) p;
   // if(getForce() == j->getElement()){
   //     j->perdVie(30);
   // }
   // else if(faiblesse == attaqueJoueur){
   //      //else if(getFaiblesse() == j->getElement()){
   //     j->perdVie(10);
   // }
   // else{
   //     j->perdVie(15);
   // }
   switch(j->getElement()){
       case force:
            j->perdVie(30);
            break;
       case faiblesse:
            j->perdVie(10);
            break;
       default:
            j->perdVie(15);
            break;
   }
}
