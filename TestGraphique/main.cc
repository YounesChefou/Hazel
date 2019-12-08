#include <iostream>
#include <gtkmm/button.h>
#include <gtkmm/main.h>
#include <gtkmm/window.h>

int main(int argc, char* argv[]){
    Gtk::Main app(argc, argv);
    Gtk::Window fenetre;
    //fenetre.fullscreen();
    fenetre.set_border_width(10);
    Gtk::Button bouton("Clique-moi !"); //Création d'un bouton.
    fenetre.add(bouton); //Ajout du bouton à la fenêtre.

    bouton.show(); //Afficher le bouton.

    Gtk::Main::run(fenetre);
    fenetre.set_title("Ma feneeeetre");
    Gtk::Main::run(fenetre);
    return 0;
}
