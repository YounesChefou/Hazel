#include "../Jeu/Monstre.hh"
#include <QGraphicsPixmapItem>
#include "Barre.hh"

class SpriteMonstre : public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    SpriteMonstre(Monstre* m);
    ~SpriteMonstre();
    void setPosition(int x, int y);
    void deplacerDe(int nX, int nY);
    void changerDirection(int nouvDir){direction = nouvDir;}
    void setMonstreHP(int vie){return monstreHP->setBarre(vie);}
    Monstre* getMonstre(){return monstre;}
    Barre* getMonstreHPMax(){return monstreHPMax;}
    Barre* getMonstreHP(){return monstreHP;}
public slots:
    void deplacement();
private:
    Monstre* monstre;
    Barre* monstreHPMax;
    Barre* monstreHP;
    int direction;
};
