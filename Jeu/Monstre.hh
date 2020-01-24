#pragma once
#include "Personnage.hh"
#include <sstream>

class Monstre : public Personnage{
public:
    // Monstre(Statut faiblesse, Statut force, std::string couleur):faiblesse(faiblesse), force(force), couleur(couleur){}
    // ~Monstre();
    void attaque(Personnage* p);
    Statut getForce();
    Statut getFaiblesse();
//    int getIntForce();
    std::string toString();

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
