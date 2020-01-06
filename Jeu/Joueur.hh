#pragma once
#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
#include "Vie.hh"
#include "Mana.hh"
#include "Monstre.hh"
#include <QGraphicsRectItem>
#include "Barre.hh"

class Joueur : public Personnage{
public:
//Méthodes
  Joueur();
  Joueur(int v);
  void initiattaque();
  int getVieMax() const{return vieMax;}
  int getVie()  const{return vie;}
  int getManaMax() const{return manaMax;}
  int getMana() const {return mana;}
  void recuperation(Vie v);
  void recuperation(Mana a);
  void action(Monstre M); //Nom temporaire
  void transformation(); //
  void detransformation(); //Permet de revenir au Statut standard
  void setMana(int nouvMana){mana = nouvMana;}
  void changerElement();
  std::string toString();
private:
    static Statut elements[];
    int vieMax;
    int vie;
    int manaMax;
    int mana;
    int typeAttaque;
    bool transforme;
};
