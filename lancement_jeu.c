#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#include "tic-tac-toe.h"

int main(){
    printf("Bienvenue dans ma version du morpion.\nLes règles du jeu sont simples : vous devez aligner trois signes horizontalement ou verticalement ou en diagonale pour gagner.\n");

    plateau();
    jeux();


    return 0;
}
