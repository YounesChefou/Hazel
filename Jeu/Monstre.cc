#include "Monstre.hh"
#include "Joueur.hh"

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
//    switch(j->getAttaque()){
//    case (j->getElement())[force]:
//        j->perdVie(30);
//        break;
//    case (j->getElement())[faiblesse]:
//        j->perdVie(10);
//        break;
//    default:
//        j->perdVie(15);
//        break;
//    }
//}

//    if((j->getElement())[force] == j->getAttaque()){
//    //if(getForce() == j->getElement()){
//    //if(1){
//        j->perdVie(30);
//    }
//    else if((j->getElement())[faiblesse] == j->getAttaque()){
//    //else if(getFaiblesse() == j->getElement()){
//        j->perdVie(10);
//    }
//    else{
//        j->perdVie(15);
//    }
//}
