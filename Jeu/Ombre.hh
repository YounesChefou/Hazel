#pragma once
#include "Monstre.hh"

class Ombre: public Monstre{
  Ombre(int vieMax);
  Ombre();
  void attaque(Personnage a);
};
