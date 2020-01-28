#pragma once
#include <iostream>

//Nouveau type Statut qui contient les différents pouvoirs, forces et faiblesses
typedef enum {PHYSIQUE, FEU, POISON, SOIN, GLACE, AUCUNE} Statut;

//Operateur pour permettre d'afficher un Statut
inline std::ostream& operator<<(std::ostream& out, const Statut& stat)
{
    switch(stat){
        case PHYSIQUE:
            out << "PHYSIQUE";
            break;
        case FEU:
            out << "FEU";
            break;
        case POISON:
            out << "POISON";
            break;
        case SOIN:
            out << "SOIN";
            break;
        case GLACE:
            out << "GLACE";
            break;
        case AUCUNE:
            out << "AUCUNE";
            break;
        default:
            out << "woof";
            break;
    }

    return out;
}

class Personnage{
  public:
    //Constructeurs
    //Personnage():vie(200), vieMax(200){}
    //Personnage(int v):vie(v), vieMax(200){}

    //Méthodes
    bool estMort(){return vie <= 0 ? true : false;}
    std::string virtual toString() = 0;
    void virtual attaque(Personnage* p) = 0;

    //Retire des pts de vie au ersonnage
    //degats : pts de vie perdus
    void perdVie(int degats){
        std::cout << "Vie : " << this->vie << std::endl;
        this->vie -= degats;
        std::cout << "Vie : " << this->vie << std::endl;
    }

    //Rajoute de la vie au personnage
    void recupVie(int recup)
    {
        int vie = this->getVie();
        int vieMax = this->getVieMax();

        if(vie + recup <= vieMax){
            this->setVie(vie + recup);
        }
        else{
            this->setVie(vieMax);
        }
    }

    //Accesseurs
    int getVie(){return vie;}
    int getVieMax() {return vieMax;}

    //Mutateurs
    void setVie(int v){vie = v;}

protected:
  //Attributs
  int vie;
  int vieMax;

};
