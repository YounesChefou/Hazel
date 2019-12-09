#ifndef JOUEUR_HH
#define JOUEUR_HH

#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
#include <list>

class Joueur : public Personnage{
public:
//Méthodes
  Joueur();
  Joueur(int Viemax);
  void initiattaque();
private:
    int manaMax;
    int mana;
    Statut S;
    std::list<Statut> attaques; //Penser au fait que les attaques vont dépendre du statut,
    // donc fumée.hh doit être inclus
};
#endif
