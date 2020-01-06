#include "HazelGame.hh"


HazelGame::HazelGame()
{
    //Initialisation de la scene
    scene = new QGraphicsScene(0,0,1350,700);
    //Chargement du décor
    QPixmap pix("../Ressources/decorGenerique.jpg");
    //Application du décor au fond de la scene
    scene->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    this->setScene(scene);

    Joueur *j = new Joueur(150);
    Pouvoir* basic = new Pouvoir();
    scene->addItem(basic);
    sprite = new SpriteJoueur(j, basic);
    scene->addItem(sprite);

    //Ajout des barres de vie et de mana
    scene->addItem(sprite->getHPMax());
    scene->addItem(sprite->getHP());
    scene->addItem(sprite->getMPMax());
    scene->addItem(sprite->getMP());

    //Pour que le sprite soit sensible aux contrôles de l'utilisateur,
    //Il doit être "focusable"
    sprite->setFlag(QGraphicsItem::ItemIsFocusable);
    sprite->setFocus();
}
