#pragma once
#include "Monstre.hh"

class Basic: public Monstre{
  Basic(int vieMax);
  Basic();
  void attaque(Personnage a);
};
