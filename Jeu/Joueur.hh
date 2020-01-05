#pragma once
#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
#include "Vie.hh"
#include "Mana.hh"
#include "Monstre.hh"
#include <QGraphicsRectItem>
#include "barre.hh"

class Joueur : public Personnage{
public:
//Méthodes
  Joueur();
  Joueur(int v);
  void initiattaque();
  int getManamax() const{return manaMax;}
  int getMana() const {return mana;}
  Barre* getPMMax(){return PMMax;}
  Barre* getPM(){return PM;}
  void recuperation(Vie a);
  void recuperation(Mana a);
  void action(Monstre M); //Nom temporaire
  void transformation(); //
  void detransformation(); //Permet de revenir au Statut standard
  void setMana(int nouvMana){mana = nouvMana;}
  void changerElement();
  std::string toString();
private:
    static Statut elements[];
    int manaMax;
    int mana;
    int typeAttaque;
    bool transforme;
    Barre* PMMax;
    Barre* PM;
    friend class Monstre;
};
