#pragma once
#include "Personnage.hh"
#include <sstream>


class Monstre : public virtual Personnage{
public:
    // Monstre(Statut faiblesse, Statut force, std::string couleur):faiblesse(faiblesse), force(force), couleur(couleur){}
    //~Monstre();
    void virtual attaque(Statut attaqueJoueur, Personnage* j) = 0; //Fonction virtuelle pure
    Statut getForce(){return force;}
    Statut getFaiblesse(){return faiblesse;}
//    int getIntForce();
    std::string toString();

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
