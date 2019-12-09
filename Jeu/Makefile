CC = g++
CFLAGS = -Wall -std=c++11

all: main

main: Main.o FumeeBleu.o FumeeNoire.o FumeeRouge.o FumeeVerte.o FumeeViolette.o Vie.o Mana.o Joueur.o Monde.o //ajout classes filles monstre
	$(CC) $(CFLAGS) $*.o -o $@

%.o: %.cc %.hh
	$(CC) $(CFLAGS) $< -c  $*.o

clean:
	rm -rf *.o

mrproper: clean
	rm -rf main
