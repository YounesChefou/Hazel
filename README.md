# Hazel

## Regles du jeu

*Hazel* est un jeu 2D où le joueur incarne une sorcière pouvant se transformer en quatre types de fumées différentes correspondant chacune à un élément :
- fumée rouge pour FEU,
- fumée bleue pour GLACE,
- fumée violette pour POISON,
- fumée verte pour SOIN.

Le but du jeu est d’utiliser ces divers fumées à bon escient afin de venir à bout des monstres qui envahissent l’écran. Chaque monstre a une force et une faiblesse qui correspondent elles aussi à un élément. Pour vaincre un ennemi, le Joueur doit se transformer et utiliser la fumée qui a pour élément la faiblesse du Monstre.
Par exemple, pour tuer un Monstre Feu, le Joueur utilise la fumée bleue, s’il utilise la fumée rouge, le Monstre récupère de la vie.
Être transformé épuise la Mana (points de magie) et le Joueur se “détransforme” dès que celle-ci est entièrement vide. 

Lorsque le joueur n’est pas transformé, il est vulnérable aux attaques des monstres et il y a aussi des règles s’appliquant par rapport aux éléments de chacun.
Par exemple, si le joueur a comme élément sélectionné Feu et qu’il est attaqué par un ennemi Glace alors il subira une plus grosse attaque que s’il avait sélectionné Glace.
Chaque attaque de Monstre fait baisser les points de vie du joueur, qu’il peut recharger avec les objets Vie apparaissant dès qu’un ennemi meurt. Si les points de vie du joueur arrivent à 0 alors c’est la fin de la partie.

## Commandes

Le jeu se joue de cette manière :

![alt text](https://github.com/YounesChefou/Hazel/blob/master/Ressources/fond_intro.jpg "Commandes du jeu")

## Installation (Linux)

Après avoir cloné le dossier avec la commande :
```
git clone https://github.com/YounesChefou/Hazel.git
```

Il faut aller dans le dossier Installation et entrer la commande make.
```
cd Installation/
make
```

Il suffit ensuite de rentrer cette dernière commande pour lancer le jeu !
```
./hazel
```
