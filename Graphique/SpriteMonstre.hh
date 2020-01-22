#include "../Jeu/Monstre.hh"
#include <QGraphicsPixmapItem>

class SpriteMonstre : public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    SpriteMonstre(Monstre* m);
    ~SpriteMonstre();
    void setPosition(int x, int y);
    void deplacerDe(int nX, int nY);
    Barre* getMonstreHPMax(){return monstreHPMax;}
    Barre* getMonstreHP(){return monstreHP;}
public slots:
    void deplacement();
private:
    Monstre* monstre;
    Barre* monstreHPMax;
    Barre* monstreHP;
};
