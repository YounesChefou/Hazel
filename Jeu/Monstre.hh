#include "Personnage.hh"

#ifndef MONSTRE_HH
#define MONSTRE_HH

class Monstre : public Personnage{
public:
    Monstre();
    attaque(Joueur j);
protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
}
