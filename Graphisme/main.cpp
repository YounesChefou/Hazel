#include <QApplication>
//#include <QPushButton>
//#include <QLabel>
//#include <QWidget>
//#include <QProgressBar>
//#include <QPicture>
//#include <QEvent>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "SpriteJoueur.hh"
#include "../Jeu/Joueur.hh"
#include <QPixmap>
#include <Qt>

int main(int argc, char *argv[]){
    // ATH affichage;
    QApplication app(argc, argv);

    //Initialisation de la scene
    QGraphicsScene * scene = new QGraphicsScene(0,0,1350,700);

    //Chargement du décor
    QPixmap pix("../Ressources/decorGenerique.jpg");
    //Application du décor au fond de la scene
    scene->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    //On cree une vue pour visualiser la scene
    QGraphicsView * view = new QGraphicsView(scene);

    //On charge le sprite du joueur
    //QPixmap pix2("../Ressources/spriteGenerique.png");
    //On cree une instance SpriteJoueur avec le sprite chargé
    //SpriteJoueur * sprite = new SpriteJoueur(pix2);
    //On ajoute le sprite à la scene
    Joueur j(150);

    //Ajout des barres de vie et de mana
    scene->addItem(j.getHPMax());
    scene->addItem(j.getHP());
    scene->addItem(j.getPMMax());
    scene->addItem(j.getPM());

    Pouvoir* basic = new Pouvoir();
    scene->addItem(basic);

    SpriteJoueur * sprite = new SpriteJoueur(j,basic);
    scene->addItem(sprite);
    //Pour que le sprite soit sensible aux contrôles de l'utilisateur,
    //Il doit être "focusable"
    sprite->setFlag(QGraphicsItem::ItemIsFocusable);
    sprite->setFocus();

    //On affiche la vue et on lance l'application
    view->show();
    return app.exec();
}
