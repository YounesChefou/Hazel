#pragma once
#include "Monstre.hh"


class Feu: public virtual Monstre{
public:
  Feu(int v);
  Feu();
  void attaque(Statut attaqueJoueur, Personnage *j);
};
