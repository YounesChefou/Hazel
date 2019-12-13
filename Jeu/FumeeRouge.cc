#include "FumeeRouge.hh"
#include <time.h>

FumeeRouge::FumeeRouge(){
  srand (time(NULL));
  couleur = "ROUGE";
  consoMana = 2; //Pas définitif
  degats = (5 + (int) rand() /(int) RAND_MAX * (10));; //Pas définitif
}
