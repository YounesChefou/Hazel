#include <QGraphicsItem>
#include <QKeyEvent>

class SpriteJoueur : public QGraphicsPixmapItem{
public:
    SpriteJoueur(QPixmap &p):QGraphicsPixmapItem(p){}
    void keyPressEvent(QKeyEvent *event);
};

