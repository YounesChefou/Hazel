#include "HazelGame.hh"
#include "../Jeu/Feu.hh"
#include "../Jeu/Glace.hh"
#include "../Jeu/Ombre.hh"
#include "Pouvoir.hh"
#include <time.h>
#include <QPushButton>

//Constructeur
HazelGame::HazelGame()
{
    initialiseSceneJeu();
}

HazelGame::~HazelGame(){}

//Initialise le jeu
void HazelGame::initialiseSceneJeu(){

    //Initialisation de la scene
    sceneJeu = new QGraphicsScene(0,0,1350,700);
    //Chargement du décor
    QPixmap pix("../Ressources/decorGenerique.jpg");
    //Application du décor au fond de la scene
    sceneJeu->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    setScene(sceneJeu);

    Joueur *j = new Joueur(200, 75);
    Pouvoir* basic = new Pouvoir();
    sceneJeu->addItem(basic);
    sprite = new SpriteJoueur(j, basic);
    sceneJeu->addItem(sprite);
    sprite->setPos(250, 500);

    //Ajout des barres de vie et de mana
    sceneJeu->addItem(sprite->getHPMax());
    sceneJeu->addItem(sprite->getHP());
    sceneJeu->addItem(sprite->getMPMax());
    sceneJeu->addItem(sprite->getMP());

    ennemisTues = 0;
    nbMonstresATuer = 5;

//    labCompteur = new QLabel();
//    labCompteur->setNum(ennemisTues);
//    sceneJeu->addWidget(labCompteur);

    //On place l'image des pouvoirs juste à côté des barres de vie et de mana
    basic->setPos(sprite->getHPMax()->x() + 300, sprite->getHPMax()->y() + 20);

    setMouseTracking(true);

    timerMouv = new QTimer();
    //Chaque fois que le timer arrive à zero, on appelle deplacement
    connect(timerMouv, SIGNAL(timeout()), this, SLOT(previentMonstres()));
    timerMouv->start(5); //Toutes les 5 ms

    //La barre de mana se vide toutes les 2 secondes lorsque le joueur est transformé
    timerMana1 = new QTimer();
    connect(timerMana1, SIGNAL(timeout()), this, SLOT(depletionMana()));
    timerMana1->start(1000); // Toutes les 2 secondes

    //La barre de mana se remplit toutes les 5 secondes lorsque le joueur n'est pas transformé
    timerMana2 = new QTimer();
    connect(timerMana2, SIGNAL(timeout()), this, SLOT(remplissageMana()));
    timerMana2->start(5000);

    //Des ennemis apparaissent toutes les dix secondes
    timerEnnemi = new QTimer();
    connect(timerEnnemi, SIGNAL(timeout()), this, SLOT(spawnEnnemis()));
    timerEnnemi->start(2000);

}


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
    sceneJeu->addItem(v);
    v->setPos(x, y);
    objetsVie.push_back(v);
}

//Ajoute un objet Mana dans la scene à la position (x,y)
void HazelGame::ajouterMana(int recup, int x, int y)
{
    QPixmap pix2("../Ressources/mana.png");
    Mana * m = new Mana(recup);
    sceneJeu->addItem(m);
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
            sceneJeu->removeItem(objetsVie[i]);
            objetsVie.erase(objetsVie.begin()+i);
        }
    }

    for(int i = 0; i < nbObjetsMana; i++){
        if(sprite->collidesWithItem(objetsMana[i])){
            sprite->recupererMana(objetsMana[i]->getRecup());
            sceneJeu->removeItem(objetsMana[i]);
            objetsMana.erase(objetsMana.begin()+i);
        }
    }
}

//Ajoute un ennemi dans la scène
void HazelGame::ajouterMonstre(SpriteMonstre* m, int x, int y){
    sceneJeu->addItem(m);
    sceneJeu->addItem(m->getMonstreHPMax());
    sceneJeu->addItem(m->getMonstreHP());
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
                if(persoJoueur->estMort()){
                    finDePartie(0);
                    return;
                }
                else if(!persoJoueur->estInvincible()){ //On rend le joueur invincible pendant 2 secondes
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

            //On retire sa barre de vie
            sceneJeu->removeItem(monstres[i]->getMonstreHPMax());
            sceneJeu->removeItem(monstres[i]->getMonstreHP());
            sceneJeu->removeItem(monstres[i]);

            //On tire au sort si sa mort résulte en l'apparition d'un objet
            spawnObjets(x,y);

            //On le retire du tableau
            monstres.erase(monstres.begin()+i);

            if(ennemisTues >= nbMonstresATuer) finDePartie(1);
        }
    }
}

//Fait apparaitre aléatoirement un Objet Vie ou un Objet Mana
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
    if( monstres.size() >= 4 /*|| ((ennemisTues + monstres.size() + 1) > nbMonstresATuer)*/ ) return; //Pas plus de quatre monstres à la fois

    srand(time(NULL));
    int spawn = rand() % 2;
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
            ajouterMonstre(spriteM, 800, 150);
            break;
        case 1:
            ajouterMonstre(spriteM, 800, 550);
            break;
        case 2:
            ajouterMonstre(spriteM, 150, 550);
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
        j->setMana(j->getMana() - 5);
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
            if(j->estTransforme()) sprite->changerSprite(j->getAttaque());
            break;
        default:
            std::cout << "Me and Michael" << std::endl;
        break;
    }
}

//Declenche la fin de la partie
void HazelGame::finDePartie(int i){
    QPixmap ecranOver("../Ressources/ecranGameOver.png");
    QPixmap ecranVictoire("../Ressources/ecranVictoire.png");
    //QPushButton* button = new QPushButton("Continue ?");
    switch(i){
        case 0:
            std::cout << "Vous avez perdu :(" << std::endl;
            //desactiveToutJeu();
            sceneGameOver = new QGraphicsScene(0,0,1350,700);
            sceneGameOver->setBackgroundBrush(ecranOver.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
            desactiveToutJeu();
            // sceneGameOver->addWidget(button);
            // connect(button, SIGNAL(clicked()), this, SLOT(rejouer()));
            setScene(sceneGameOver);
            QTimer::singleShot(2000, this, SLOT(rejouer()));
            break;
        case 1:
            std::cout << "Victoire woo" << std::endl;
            //desactiveToutJeu();
            sceneGameOver = new QGraphicsScene(0,0,1350,700);
            sceneGameOver->setBackgroundBrush(ecranVictoire.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
            desactiveToutJeu();
            //sceneGameOver->addWidget(button);
            //connect(button, SIGNAL(clicked()), this, SLOT(rejouer()));
            QTimer::singleShot(3000, this, SLOT(rejouer()));
            setScene(sceneGameOver);
            break;
    }
}

//Desactive tous les éléments de la scène Jeu pour afficher le Game Over
void HazelGame::desactiveToutJeu(){
    //On arrête les timers et donc les appels de fonctions
    timerMouv->stop();
    timerMana1->stop();
    timerMana2->stop();
    timerEnnemi->stop();

    //On desactive le MouseTracking
    setMouseTracking(false);

    //On retire tous les monstres
    int nbMonstres = monstres.size();
    for(int i = 0; i < nbMonstres; i++) monstres.erase(monstres.begin()+i);

    //On retire tous les objets
    int nbObjets = objetsVie.size();
    for(int i = 0; i < nbObjets; i++) objetsVie.erase(objetsVie.begin()+i);
    nbObjets = objetsMana.size();
    for(int i = 0; i < nbObjets; i++) objetsMana.erase(objetsMana.begin()+i);

    //On remet le personnage du joueur par défaut
    Joueur* j = sprite->getJoueur();
    j->setAttaque(0);
    sprite->getPicto()->changerPicto(j->getAttaque());
    sprite->changerSprite(0);
    if(j->estTransforme()) j->transformation();
    j->setVie(j->getVieMax());
    j->setMana(j->getManaMax());
    sprite->setHP(j->getVie());
}

//Reactive les elements de la scène Jeu
void HazelGame::reactiveToutJeu(){
    //On arrête les timers et donc les appels de fonctions
    timerMouv->start(5);
    timerMana1->start(1000);
    timerMana2->start(5000);
    timerEnnemi->start(5000);

    //On desactive le MouseTracking
    setMouseTracking(true);
}

//Rejouer partie
void HazelGame::rejouer(){
    ennemisTues = 0;
    setScene(sceneJeu);
    reactiveToutJeu();
}
