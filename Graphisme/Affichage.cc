#include "Affichage.hh"

Affichage::Affichage(Joueur j):HP(QGraphicsRectItem(20,20,j.getVie(),20)),MP(QGraphicsRectItem(20,60,j.getMana(),20)),joueur(j),QGraphicsRectItem(20,20,j.getviemax(),20),QGraphicsRectItem(20,60,j.getManamax(),20){}
