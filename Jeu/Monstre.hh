#ifndef MONSTRE_HH
#define MONSTRE_HH

#include "Personnage.hh"

class Monstre : public Personnage{
public:
    Monstre();
    attaque(Joueur j);
protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
}
