#pragma once
#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
#include "Barre.hh"


class Joueur : public Personnage{
public:
  //Constructeurs
  Joueur();
  Joueur(int v, int m);

  //Destructeur
  ~Joueur();

  //Fonctions
  void attaque(Personnage* p);
  void transformation(); //
  void invincibilite();
  void recupMana(int recup);
  void changerElement();
  std::string toString();

  //Accesseurs
  int getManaMax() const{return manaMax;}
  int getMana() const {return mana;}
  int getAttaque() const {return typeAttaque;}
  Statut getElement() const{return elements[typeAttaque];}
  bool estTransforme(){return transforme;}
  bool estInvincible(){return godMode;}

  //Mutateurs
  void setMana(int nouvMana){mana = nouvMana;}

private:
    //Attributs
    static Statut elements[];
    int manaMax;
    int mana;
    int typeAttaque;
    bool transforme;
    bool godMode;
};
