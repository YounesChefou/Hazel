#include "../Jeu/Monstre.hh"
#include <QGraphicsPixmapItem>

class SpriteMonstre : public QGraphicsPixmapItem{
public:
    SpriteMonstre(Monstre* m);
    ~SpriteMonstre();
    void setPosition(int x, int y);
    void deplacerDe(int nX, int nY);
    Barre* getMonstreHPMax(){return monstreHPMax;}
    Barre* getMonstreHP(){return monstreHP;}

private:
    Monstre* monstre;
    Barre* monstreHPMax;
    Barre* monstreHP;
};
