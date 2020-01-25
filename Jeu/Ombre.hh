#pragma once
#include "Monstre.hh"

class Ombre: public Monstre{
public:
  Ombre(int v);
  Ombre();
  ~Ombre();
  void attaque(int attaqueJoueur, Personnage *j);
};
