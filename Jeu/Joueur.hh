#pragma once
#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
//#include "Vie.hh"
//#include "Mana.hh"
#include <QGraphicsRectItem>
#include "Barre.hh"
#include "Monstre.hh"


class Joueur : public Personnage{
public:
  //Constructeurs
  Joueur();
  Joueur(int v, int m);
  //Destructeur
  ~Joueur();
  //Fonctions
  void initiattaque();
  int getVieMax() const{return vieMax;}
  int getVie()  const{return vie;}
  int getManaMax() const{return manaMax;}
  int getMana() const {return mana;}
  int getAttaque() const {return typeAttaque;}
  Statut getElement() const{return elements[typeAttaque];}
  //std::map<std::string,int> getElement() const{return elements;}
  //void attaque(Personnage *p);
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
    friend class Monstre;
    static Statut elements[];
    //static std::map<std::string,int> elements;
    int manaMax;
    int mana;
    int typeAttaque;
    bool transforme;
    bool godMode;
};
