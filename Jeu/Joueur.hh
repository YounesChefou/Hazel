#pragma once
#include "Personnage.hh"
#include <string>
#include <iostream>
#include <ostream>
//#include "Vie.hh"
//#include "Mana.hh"
#include "Monstre.hh"
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
  void initiattaque();
  int getVieMax() const{return vieMax;}
  int getVie()  const{return vie;}
  int getManaMax() const{return manaMax;}
  int getMana() const {return mana;}
  int getAttaque() const {return typeAttaque;}
  void action(Monstre* M); //Nom temporaire
  void transformation(); //
  void detransformation(); //Permet de revenir au Statut standard
  void setMana(int nouvMana){mana = nouvMana;}
  void recupVie(int recup);
  void recupMana(int recup);
  void changerElement();
  bool estTransforme(){return transforme;}
  std::string toString();
private:
    //Attributs
    static Statut elements[];
    int vieMax;
    int vie;
    int manaMax;
    int mana;
    int typeAttaque;
    bool transforme;
};
