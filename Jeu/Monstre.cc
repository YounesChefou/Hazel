#include "Monstre.hh"

std::string Monstre::toString()
    {
        std::stringstream str;
        str << "=========================" << std::endl;
        str << "Le monstre a " << vie << " sur " << vieMax << std::endl;
        str << "=========================" << std::endl;
        return str.str();
    }



//int Monstre::getIntForce(){return intForce;}

//Permet au Monstre d'attaquer le joueur j
//void Monstre::attaque(Personnage *j){
//    Joueur* j = (Joueur*) p;
//     if(force == attaqueJoueur){
//         //if(getForce() == j->getElement()){
//         //if(1){
//        j->perdVie(30);
//      }
//      else if(faiblesse == attaqueJoueur){
//         //else if(getFaiblesse() == j->getElement()){
//        j->perdVie(10);
//      }
//      else{
//        j->perdVie(15);
//      }


