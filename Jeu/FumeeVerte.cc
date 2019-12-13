#include "FumeeVerte.hh"
#include <time.h>

FumeeVerte::FumeeVerte(){
  srand (time(NULL));
  couleur = "Verte";
  consoMana = 10; //Pas définitif
  degats = (5 + (int) rand() /(int) RAND_MAX * (10)); //Pas définitif, ici degats <=> pts de vie récupérés
}
