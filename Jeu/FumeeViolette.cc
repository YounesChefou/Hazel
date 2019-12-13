#include "FumeeViolette.hh"
#include <time.h>

FumeeViolette::FumeeViolette(){
  srand (time(NULL));
  couleur = "Violette";
  consoMana = 2; //Pas définitif
  degats = (2 + (int) rand() /(int) RAND_MAX * (5));; //Pas définitif
}
