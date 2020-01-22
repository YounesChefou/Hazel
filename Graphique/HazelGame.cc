#include "HazelGame.hh"
#include "Vie.hh"
#include "Mana.hh"
#include "../Jeu/Feu.hh"
#include <QTimer>

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

    Feu* f = new Feu(75);
    SpriteMonstre* spriteM =  new SpriteMonstre(f);
    ajouterMonstre(spriteM, 500, 150);

    QTimer * timer = new QTimer();
    //Chaque fois que le timer arrive à zero, on appelle deplacement
    connect(timer, SIGNAL(timeout()), this, SLOT(previentMonstres()));

    timer->start(5); //Toutes les 5 ms
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

//Ajoute un ennemi dans la scène
void HazelGame::ajouterMonstre(SpriteMonstre* m, int x, int y){
    scene->addItem(m);
    scene->addItem(m->getMonstreHPMax());
    scene->addItem(m->getMonstreHP());
    m->setPosition(x, y);
    monstres.push_back(m);
}

//Indique aux ennemis où se situe le joueur
void HazelGame::previentMonstres(){
    int xJoueur = sprite->x(), yJoueur = sprite->y();
    int xMonstre = 0, yMonstre = 0;
    int xComp = 0, yComp = 0;
    int nbMonstres = monstres.size();

    //On compare la position du joueur et de chaque monstre pour leur indiquer où aller
    for(int i = 0; i < nbMonstres; i++){
        xMonstre = monstres[i]->x();
        yMonstre = monstres[i]->y();

        xComp = xMonstre - xJoueur;
        yComp = yMonstre - yJoueur;

        if(xComp > 0 && yComp > 0){ //Le Joueur est à gauche du Monstre
            monstres[i]->changerDirection(8);
        }
        else if(xComp > 0 && yComp == 0){
            monstres[i]->changerDirection(7);
        }
        else if(xComp > 0 && yComp < 0){
            monstres[i]->changerDirection(6);
        }
        else if(xComp == 0 && yComp > 0){//Le Joueur est sur le même axe que le Monstre, soit en haut, soit en bas
            monstres[i]->changerDirection(1);
        }
        else if(xComp == 0 && yComp < 0){
            monstres[i]->changerDirection(5);
        }
        else if(xComp < 0 && yComp < 0){//Le Joueur est à droite du Monstre
            monstres[i]->changerDirection(4);
        }
        else if(xComp < 0 && yComp == 0){
            monstres[i]->changerDirection(3);
        }
        else if(xComp < 0 && yComp > 0){
            monstres[i]->changerDirection(2);
        }
    }
}
