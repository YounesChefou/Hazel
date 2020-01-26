#include "HazelGame.hh"
#include "Vie.hh"
#include "Mana.hh"
#include "../Jeu/Feu.hh"
#include "../Jeu/Glace.hh"
#include "../Jeu/Ombre.hh"
#include "Pouvoir.hh"
#include <time.h>
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

    Joueur *j = new Joueur(100, 25);
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

    //On place l'image des pouvoirs juste à côté des barres de vie et de mana
    basic->setPos(sprite->getHPMax()->x() + 200, sprite->getHPMax()->y() + 20);

    // ajouterVie(20, 500, 500);
    // ajouterMana(10, 600, 500);
    //


    setMouseTracking(true);

    QTimer* timerMouv = new QTimer();
    //Chaque fois que le timer arrive à zero, on appelle deplacement
    connect(timerMouv, SIGNAL(timeout()), this, SLOT(previentMonstres()));
    timerMouv->start(5); //Toutes les 5 ms

    //La barre de mana se vide toutes les 2 secondes lorsque le joueur est transformé
    QTimer* timerMana1 = new QTimer();
    connect(timerMana1, SIGNAL(timeout()), this, SLOT(depletionMana()));
    timerMana1->start(2000); // Toutes les 2 secondes

    //La barre de mana se remplit toutes les 5 secondes lorsque le joueur n'est pas transformé
    QTimer* timerMana2 = new QTimer();
    connect(timerMana2, SIGNAL(timeout()), this, SLOT(remplissageMana()));
    timerMana2->start(5000);

    //Des ennemis apparaissent toutes les dix secondes
    QTimer* timerEnnemi = new QTimer();
    connect(timerEnnemi, SIGNAL(timeout()), this, SLOT(spawnEnnemis()));
    timerEnnemi->start(10000);
}

HazelGame::~HazelGame(){}

//Permet de déplacer le personnage à l'aide de la souris
void HazelGame::mouseMoveEvent(QMouseEvent *event)
{
    int x = event->x();
    int y = event->y();
    sprite->setPos(x,y);
    collisionsObjets();
    collisionsMonstres();
}

//Ajoute un objet Vie dans la scene à la position (x,y)
void HazelGame::ajouterVie(int recup, int x, int y)
{
    QPixmap pix("../Ressources/vie.png");
    Vie * v = new Vie(recup);
    this->scene->addItem(v);
    v->setPos(x, y);
    objetsVie.push_back(v);
}

//Ajoute un objet Mana dans la scene à la position (x,y)
void HazelGame::ajouterMana(int recup, int x, int y)
{
    QPixmap pix2("../Ressources/mana.png");
    Mana * m = new Mana(recup);
    this->scene->addItem(m);
    m->setPos(x, y);
    objetsMana.push_back(m);
}

//Verifie si le joueur est entré en contact avec un objet
//J'ai fait deux tableaux mais possibilité de faire avec un seul
//tableau d'objet et de caster dans la fonction
void HazelGame::collisionsObjets()
{
    int nbObjetsVie = objetsVie.size();
    int nbObjetsMana = objetsMana.size();

    for(int i = 0; i < nbObjetsVie; i++){
        if(sprite->collidesWithItem(objetsVie[i])){
            sprite->recupererVie(objetsVie[i]->getRecup());
            scene->removeItem(objetsVie[i]);
            objetsVie.erase(objetsVie.begin()+i);
        }
    }

    for(int i = 0; i < nbObjetsMana; i++){
        if(sprite->collidesWithItem(objetsMana[i])){
            sprite->recupererMana(objetsMana[i]->getRecup());
            scene->removeItem(objetsMana[i]);
            objetsMana.erase(objetsMana.begin()+i);
        }
    }
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

        //Surement une manière plus élégante d'écrire ça
        //A etudier
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

//Verifie les collisions entre le joueur et le monstre
//Si Joueur non transforme et collision avec monstre, monstre fait des dégats à joueur plus ou moins élevés, basés sur leur element
//Si Joueur transforme, alors la collision résulte en des dégats sur le Monstre
void HazelGame::collisionsMonstres(){
    int nbMonstres = monstres.size();
    Joueur* persoJoueur = sprite->getJoueur();
    Monstre* monstre;

    for(int i = 0; i < nbMonstres; i++){
        monstre = monstres[i]->getMonstre();
        if(sprite->collidesWithItem(monstres[i])){
            if(persoJoueur->estTransforme()){//Le joueur attaque
                persoJoueur->attaque(monstre);
                monstres[i]->setMonstreHP(monstre->getVie());
                std::cout << monstre->toString() << std::endl;
                std::cout << "Attaque contre ennemi" << std::endl;
            }
            else{//Le Monstre attaque
                monstre->attaque(persoJoueur);
                sprite->setHP(persoJoueur->getVie());
                std::cout << persoJoueur->toString() << std::endl;
                std::cout << "Attaque contre joueur" << std::endl;
                if(!persoJoueur->estInvincible()){ //On rend le joueur invincible pendant 2 secondes
                    joueurInvincible();
                    QTimer::singleShot(2000, this, SLOT(joueurInvincible()));
                }
            }
        }
    }


    effacerMorts();
}

//Efface les monstres morts de la scene
void HazelGame::effacerMorts(){
    Monstre* M;
    int nbMonstres = monstres.size();
    int x, y;

    for(int i = 0; i < nbMonstres; i++){
        M = monstres[i]->getMonstre();
        if(M->estMort()){
            x = monstres[i]->x();
            y = monstres[i]->y();

            //On incrémente le compteur d'ennemis tués
            ennemisTues += 1;
            if(ennemisTues >= 15) finDePartie(1);
            //On retire sa barre de vie
            scene->removeItem(monstres[i]->getMonstreHPMax());
            scene->removeItem(monstres[i]->getMonstreHP());
            scene->removeItem(monstres[i]);

            //On tire au sort si sa mort résulte en l'apparition d'un objet
            spawnObjets(x,y);

            //On le retire du tableau
            monstres.erase(monstres.begin()+i);
        }
    }
}

//Fait apparaitre aléatoirement un Objet Vie ou un Ob
void HazelGame::spawnObjets(int x, int y){
    srand(time(NULL));
    int spawn = rand() % 5;

    switch(spawn){
        case 1:
            ajouterVie(20, x, y);
            break;
        case 2:
            ajouterVie(100, x, y);
            break;
        case 3:
            ajouterMana(10, x, y);
            break;
        case 4:
            ajouterMana(30, x, y);
            break;
    }

}


//Fait apparaitre des ennemis à une des quatre endroits de spawn possibles
void HazelGame::spawnEnnemis(){
    if(monstres.size() >= 4) return; //Pas plus de quatre monstres à la fois

    srand(time(NULL));
    int spawn = rand() % 3;
    int position = rand() % 3;
    Monstre* M;
    switch(spawn) {
        case 0 :
            M = new Feu(200);
            break;
        case 1:
            M = new Glace(200);
            break;
        case 2:
            M = new Ombre(200);
            break;
        default:
            M = new Feu(200);
            break;
    }

    SpriteMonstre* spriteM = new SpriteMonstre(M);

    switch (position) {
        case 0:
            ajouterMonstre(spriteM, 700, 150);
            break;
        case 1:
            ajouterMonstre(spriteM, 700, 700);
            break;
        case 2:
            ajouterMonstre(spriteM, 150, 700);
            break;
    }

}

//Appelle la fonction invincibilite() de Joueur
//Le joueur devient soit invulnérable aux attaques ennemies
//soit redevient vulnérable.
void HazelGame::joueurInvincible(){
    sprite->getJoueur()->invincibilite();
}

//Appelle la méthode de transformation du joueur
void HazelGame::joueurTransforme(){
    sprite->spriteTransformation();
}

//Vide la barre de Mana du joueur lorsqu'il est transforme et le fait
//revenir à sa forme de base après que celle-ci soit entièrement vide
void HazelGame::depletionMana(){
    Joueur* j = sprite->getJoueur();
    if(j->estTransforme()){ // Si le joueur est transforme, alors on vide sa mana
        j->setMana(j->getMana() - 2);
        sprite->setMP(j->getMana());
        if(j->getMana() <= 0) joueurTransforme();
    }
}

//Si le joueur n'est pas transforme, sa barre de Mana se remplit lentement
void HazelGame::remplissageMana(){
    Joueur* j = sprite->getJoueur();
    if(!j->estTransforme()){ // Si le joueur est transforme, alors on vide sa mana
        j->setMana(j->getMana() + 2);
        sprite->setMP(j->getMana());
    }
}

//Transformation du joueur avec un clic gauche
//Changement d'element avec un clic droit
void HazelGame::mousePressEvent(QMouseEvent *event){
    Joueur* j = sprite->getJoueur();
    Pouvoir* p = sprite->getPicto();

    switch(event->button()){
        case Qt::LeftButton:
            joueurTransforme();
            break;
        case Qt::RightButton:
            j->changerElement();
            p->changerPicto(j->getAttaque());
            break;
        default:
            std::cout << "Me and Michael" << std::endl;
        break;
    }
}

//
void HazelGame::finDePartie(int i){
    switch(i){
        case 0:
            std::cout << "Vous avez perdu :(" << std::endl;
            break;
        case 1:
            std::cout << "Victoire woo" << std::endl;
            break;
    }
}
