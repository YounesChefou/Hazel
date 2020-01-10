#pragma once
#include "Objet.hh"

class Mana: public Objet{
public:
  Mana(int recuperation);
  Mana();
  int getrecup(){return recup;}
};
