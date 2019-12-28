#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QWidget>
#include <QProgressBar>
#include <QEvent>
#include <Qt>

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    //Iniatilisation

    //Fenêtre de Jeu
    QWidget fenetre;
    fenetre.setFixedSize(1350,700);

    //Nom du Joueur
    QLabel Nom(&fenetre);
    Nom.setText("Joueur");
    Nom.move(55,0);

    //Barre de Vie
    QLabel LPV(&fenetre);
    LPV.setText("PV");
    LPV.move(10,25);

    QProgressBar PV(&fenetre);
    PV.setTextVisible(false);
    PV.move(30,20);
    PV.setValue(100/*PV Joueur*/);
    PV.setMinimum(0);
    PV.setMaximum(100/*PV max Joueur*/);

    //Barre de Mana
    QLabel LHP(&fenetre);
    LHP.setText("HP");
    LHP.move(10,65);

    QProgressBar HP(&fenetre);
    HP.setTextVisible(false);
    HP.move(30,60);
    HP.setValue(100/*HP max Joueur*/);
    HP.setMinimum(0);
    HP.setMaximum(100/*HP max Joueur*/);


    //Affichage Pouvoirs
    QSize size(30,30); //Dimension image

    //Base
    QLabel physique(&fenetre);
    physique.setPixmap((QPixmap("physique.png")).scaled(size)); //Créer l'image
    physique.move(1000,10);

    //Feu
    QLabel feu(&fenetre);
    feu.setPixmap((QPixmap("flamme.png")).scaled(size));
    feu.move(1040,10);

    //Poison
    QLabel poison(&fenetre);
    poison.setPixmap((QPixmap("poison.png")).scaled(size)); //Créer l'image
    poison.move(1080,10);

    //Soin
    QLabel soin(&fenetre);
    soin.setPixmap((QPixmap("soin.png")).scaled(size)); //Créer l'image
    soin.move(1120,10);

    //Glace
    QLabel glace(&fenetre);
    glace.setPixmap((QPixmap("glace.png")).scaled(size)); //Créer l'image
    glace.move(1160,10);


    //Affichage Ennemi
    QLabel ennemi(&fenetre);//Type Ennemi ou Nom
    ennemi.setText("Nom");
    ennemi.move(30,610);

    //Barre de Vie ennemi
    QLabel EPV(&fenetre);
    EPV.setText("PV");
    EPV.move(10,635);

    QProgressBar ENPV(&fenetre);
    ENPV.setTextVisible(false);
    ENPV.move(30,630);
    ENPV.setValue(100/*PV ennemi*/);
    ENPV.setMinimum(0);
    ENPV.setMaximum(100/*PV max ennemi*/);


    fenetre.show();
    return app.exec();
}
