#pragma once
#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
//#include "Vie.hh"
//#include "Mana.hh"
#include <QGraphicsRectItem>
#include "Barre.hh"


class Joueur : public Personnage{
public:
  //Constructeurs
  Joueur();
  Joueur(int v, int m);
  //Destructeur
  ~Joueur();
  //Fonctions
  int getManaMax() const{return manaMax;}
  int getMana() const {return mana;}
  int getAttaque() const {return typeAttaque;}
  Statut getElement() const{return elements[typeAttaque];}

  void attaque(Personnage* p);
  void transformation(); //
  void invincibilite();
  void setMana(int nouvMana){mana = nouvMana;}
  void recupMana(int recup);
  void changerElement();
  bool estTransforme(){return transforme;}
  bool estInvincible(){return godMode;}
  std::string toString();

private:
    //Attributs
    static Statut elements[];
    int manaMax;
    int mana;
    int typeAttaque;
    bool transforme;
    bool godMode;
};
