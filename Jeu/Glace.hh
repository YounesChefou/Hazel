#pragma once
#include "Monstre.hh"


class Glace: public Monstre{
public:
  Glace();
  Glace(int v);
  ~Glace();
  void attaque(int attaqueJoueur, Personnage *j);
};
