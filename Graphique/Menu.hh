#pragma once
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>
#include <QPixmap>
#include <iostream>

class Menu : public QGraphicsScene{
public:
    Menu();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    bool getPress(){return press;}
    QPixmap getPix(){return pix;}
private:
    QPixmap* pix;
};
