#pragma once
#include "Monstre.hh"


class Feu: public Monstre{
public:
  Feu(int v);
  Feu();
  void attaque(Personnage* p);
  std::string getForce() {return "FEU";}
};
