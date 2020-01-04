#include "Mana.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Mana::Mana(int recuperation){
  recup = recuperation;
  nom = "MANA";
}
Mana::Mana(){
  srand (time(NULL));
  recup = (10 + (int) rand() /(int) RAND_MAX * (10));
  nom = "MANA";
}
