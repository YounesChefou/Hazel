#pragma once
#include "Objet.hh"

class Vie: public Objet{
public:
  Vie(int recuperation);
  Vie();
  int getrecup(){return recup;}
  //Type type(){ return Type;}
};
