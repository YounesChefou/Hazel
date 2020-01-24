#pragma once
#include "Personnage.hh"
#include "Joueur.hh"
#include <sstream>


class Monstre : public Personnage{
public:
    // Monstre(Statut faiblesse, Statut force, std::string couleur):faiblesse(faiblesse), force(force), couleur(couleur){}
    // ~Monstre();
   // void attaque(Personnage* j);
    Statut getForce() const {return force;}
    Statut getFaiblesse() const {return faiblesse;}
//    int getIntForce();
    std::string toString();

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
