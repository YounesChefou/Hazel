#ifndef JOUEUR_HH
#define JOUEUR_HH

#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
#include <list>
#include "Vie.hh"
#include "Mana.hh"

class Joueur : public Personnage{
public:
//Méthodes
  Joueur();
  Joueur(int Viemax);
  void initiattaque();
  int getvie() const {return vie;}
  int getviemax() const {return vieMax;}
  void recuperation(Vie a);
  void recuperation(Mana a);
  void action(Monstre M); //Nom temporaire
  void transformation(Statut S); //
  void detransformation(); //Permet de revenir au Statut standatd
  std::string toString();
private:
    int manaMax;
    int mana;
    Statut element;
    std::list<Statut> attaques;
};
#endif
