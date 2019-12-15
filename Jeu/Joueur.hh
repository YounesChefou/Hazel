#ifndef JOUEUR_HH
#define JOUEUR_HH

#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
#include <list>
#include "Vie.hh"
#include "Mana.hh"
#include "Monstre.hh"

class Joueur : public Personnage{
public:
//Méthodes
  Joueur();
  Joueur(int Viemax);
  void initiattaque();
  int getMana() const {return mana;}
  void recuperation(Vie a);
  void recuperation(Mana a);
  void action(Monstre M); //Nom temporaire
  void transformation(Statut S); //
  void detransformation(); //Permet de revenir au Statut standard
  // void setMana(int nouvMana){mana = nouvMana;}
  void setMana(int nouvMana){mana = nouvMana;}
  std::string toString();
private:
    int manaMax;
    int mana;
    Statut element;
    std::list<Statut> attaques;
    friend class Monstre;
};
#endif
