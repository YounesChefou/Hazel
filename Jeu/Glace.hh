#pragma once
#include "Monstre.hh"


class Glace: public virtual Monstre{
private:
public:
  Glace(int v);
  Glace();
  void attaque(int attaqueJoueur, Personnage *j);
};
