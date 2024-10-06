
all: morpion


morpion: lancement_jeu.o plateau.o jeux.o
	gcc lancement_jeu.o plateau.o -o morpion jeux.o


lancement_jeu.o: lancement_jeu.c tic-tac-toe.h
	gcc -c lancement_jeu.c

plateau.o: plateau.c tic-tac-toe.h
	gcc -c plateau.c

jeux.o: jeux.c tic-tac-toe.h
	gcc -c jeux.c	


clean:
	rm -f *.o morpion



