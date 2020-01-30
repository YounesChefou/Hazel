#pragma once
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>

class Menu : public QGraphicsScene{
public:
    Menu();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    bool getPress(){return press;}
private:
    bool press;
};
