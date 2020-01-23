#pragma once
#include "Monstre.hh"


class Feu: public Monstre{
public:
  Feu(int v);
  Feu();
  Statut getForce() {return force;}
};
