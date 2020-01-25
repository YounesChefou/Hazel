#pragma once
#include "Monstre.hh"

class Ombre: public virtual Monstre{
public:
  Ombre(int v);
  Ombre();
  void attaque(int attaqueJoueur, Personnage *j);
};
