#include "../Jeu/Monstre.hh"

class SpriteMonstre : public QGraphicsPixmapItem{
public:
    SpriteMonstre(Monstre* m);
private:
    Monstre* monstre;
    Barre* monstreHP;
};
