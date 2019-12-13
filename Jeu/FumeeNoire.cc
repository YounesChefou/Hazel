#include "FumeeNoire.hh"
#include <time.h>

FumeeNoire::FumeeNoire(){
  srand (time(NULL));
  couleur = "NOIRE";
  consoMana = 0;
  degats = (5 + (int) rand() /(int) RAND_MAX * (5)); //Pas définitif
}
