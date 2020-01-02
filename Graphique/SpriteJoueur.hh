#include <QGraphicsItem>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>

class SpriteJoueur : public QGraphicsPixmapItem{
public:
//    static QPixmap spriteStandard;
//    static QPixmap spriteGlace;
//    static QPixmap spriteFeu;
    SpriteJoueur(QPixmap &p):QGraphicsPixmapItem(p){}
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void changerSprite(char typeFumee);
};
