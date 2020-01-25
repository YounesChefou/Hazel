#pragma once
#include "Monstre.hh"

class Basic: public virtual Monstre{
  Basic(int vieMax);
  Basic();
  void attaque(int attaqueJoueur, Personnage *j);
};
