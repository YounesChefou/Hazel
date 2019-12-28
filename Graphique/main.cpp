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
    PV.setValue(100/*PV max Joueur*/);
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

    //Pouvoirs
    //QKeyEvent Ev(QEvent::KeyPress,Qt::KeypadModifier,QString(),false,1);


//    TEST OpenClassroom
//    QString att = "Feu";
//    QPushButton bouton(att, &fenetre);
//    QFont it(att, -1,75,false);
//    bouton.move(150,75);
//    bouton.setCursor(Qt::PointingHandCursor);
//    bouton.setFont(it);
//    bouton.setToolTip("Attaque");
//    bouton.setIcon(QIcon("flamme.png"));
    fenetre.show();
    return app.exec();
}
