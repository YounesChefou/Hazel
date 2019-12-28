#include "Joueur.hh"
#include "Mana.hh"
#include "Monde.hh"
#include "Monstre.hh" //A remplacer par .hh des classes filles
#include "Feu.hh"
#include "Glace.hh"
#include "Ombre.hh"
#include "Vie.hh"
#include <thread>


Joueur j(150);
Feu monstre1(50);
Glace monstre2(50);
Ombre monstre3(50);

void baisseDeMana(int a){
    time_t horloge;
    time(&horloge);

    time_t avant, now;
    time(&avant);

    for(int i = 0; i < 20; i++){
        if(difftime(avant, now) > 3){
            std::cout << j.toString() << a << std::endl;
            j.setMana(j.getMana() - 2);
            avant = now;
            time(&now);
            std::cout << j.toString() << std::endl;
        }
    }
}

int main(){
// std::thread v(&baisseDeMana, 2);
// std::cout << "its yo boy" << std::endl;
// std::cout << j.toString() << std::endl;
// std::cout << j.toString() << std::endl;
// v.join();
// std::cout << j.toString() << std::endl;

//Test attaques
std::cout << j.toString() << std::endl;
j.action(monstre1);
j.action(monstre2);
j.action(monstre3);
}
