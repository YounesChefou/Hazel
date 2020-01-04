#pragma once
#include <QGraphicsScene>
#include <QGraphicsItem>

class Pouvoir: public QGraphicsPixmapItem{
 public:
     Pouvoir();
     Pouvoir(QString s, QGraphicsScene* scene);
};
