#include "HazelGame.hh"

//Initialise le jeu
HazelGame::HazelGame()
{
    //Initialisation de la scene
    scene = new QGraphicsScene(0,0,1350,700);
    //Chargement du décor
    QPixmap pix("../Ressources/decorGenerique.jpg");
    //Application du décor au fond de la scene
    scene->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    this->setScene(scene);

    Joueur *j = new Joueur(100);
    Pouvoir* basic = new Pouvoir();
    scene->addItem(basic);
    sprite = new SpriteJoueur(j, basic);
    scene->addItem(sprite);
    sprite->setPos(250, 500);

    //Ajout des barres de vie et de mana
    scene->addItem(sprite->getHPMax());
    scene->addItem(sprite->getHP());
    scene->addItem(sprite->getMPMax());
    scene->addItem(sprite->getMP());

    //On place l'image des pouvoirs juste à côté de
    basic->setPos(sprite->getHPMax()->x() + 200, sprite->getHPMax()->y() + 20);
    //Pour que le sprite soit sensible aux contrôles de l'utilisateur,
    //Il doit être "focusable"
    sprite->setFlag(QGraphicsItem::ItemIsFocusable);
    sprite->setFocus();

    ajouterVie(20, 500, 500);
    ajouterVie(10, 600, 500);
}

HazelGame::~HazelGame(){}

//Ajoute un objet Vie dans la scene à la position (x,y)
void HazelGame::ajouterVie(int recup, int x, int y)
{
        QPixmap pix("../Ressources/vie.png");
        Vie * v = new Vie(recup);
        this->scene->addItem(v);
        v->setPos(x, y);
}

//Ajoute un objet Mana dans la scene à la position (x,y)
void HazelGame::ajouterMana(int recup, int x, int y)
{
        QPixmap pix2("../Ressources/mana.png");
        Mana * m = new Mana(recup);
        this->scene->addItem(m);
        m->setPos(x, y);
}
