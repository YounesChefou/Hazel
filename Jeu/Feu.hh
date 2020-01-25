#pragma once
#include "Monstre.hh"


class Feu: public Monstre{
public:
  Feu(int v);
  Feu();
  ~Feu();
  void attaque(Statut attaqueJoueur, Personnage *j);
};
