# CC = g++
# SRC= $(wildcard *.cc)
# CCFLAGS = -Wall -std=c++11
# #rajouter liens biblothèques graphiques
#
# # all: main
#
# main: Objets/%.o Monstres/%.o #ajout classes filles monstre
# 	$(CC) -Wall -std=c++11 $^ -o $@
#
# %.o: %.cc %.hh Objets/%.o Monstres/%.o
# 	$(CC) $(CCFLAGS) -o $@ -c $<
#
# Objets/%.o: Objets/%.cc Objets/%.hh Objet.hh
# 	$(CC) $(CCFLAGS) -o $@ -c
#
# Monstres/%.o: Monstres/%.cc Monstres/%.hh Monstre.hh
# 	$(CC) $(CCFLAGS) -o $@ -c
#
# clean:
# 	rm -rf *.o
#
# mrproper: clean
# 	rm -rf main
CC=g++
CCFLAGS= -Wall -Werror -std=c++11 -g
LIBFLAGS=
SRC= $(wildcard *.cc)
OBJ= $(SRC:.cc=.o)
TST= $(wildcard unitTest/*.cc)
OBJ_TEST = $(filter-out main.o, $(OBJ)) $(TST:.cc=.o)
EXEC= crash


all: $(EXEC)

testcase : $(OBJ_TEST)
	g++ -std=c++11 -Wall -o $@ $^

$(EXEC): $(OBJ)
	$(CC) $(LIBFLAGS) $^ -o $@ -lpthread -pthread

%.o: %.cc
	$(CC) $(CCFLAGS) -o $@ -c $< -lpthread -pthread

.depend:
	g++ -MM $(SRC) > .depends
-include .depends

clean:
	rm -f $(OBJ) $(EXEC)
cleantest:
	rm -f $(OBJ_TEST) testcase
distclean : clean cleantest
