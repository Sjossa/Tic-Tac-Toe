#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#include "tic-tac-toe.h"

void jeux() {
    char X = 'X';
    int tours = 0;
    int choix;
    int f = 0 ;
    srand(time(0));

    //utulisateur
    while (tours < 9) {

        


        printf("Choisissez un nombre entre 0 et 8. Le plateau a été représenté horizontalement :\n ");
        scanf("%d", &choix);
getchar(); // Pour consommer le caractère de nouvelle ligne (retour chariot)
printf("Vous avez saisi : %d\n", choix); // Vérifie l'entrée


        if (choix < 0 || choix > 8) {
            printf("Vous avez essayé de tricher et avez marqué %d, vous êtes expulsé du jeu.\n", choix);
            break;
        }
        int horizontale = choix / 3;
        int vertical = choix % 3;

        if (tableau[horizontale][vertical] != ' ') {
            printf("La case est déjà occupée. Choisissez une autre case.\n");
            continue; 
        }

        tableau[horizontale][vertical] = X;

        


        
        for (int i = 0; i < 3; i++) {
            
            if (tableau[i][0] == X && tableau[i][1] == X && tableau[i][2] == X) {
                for (int i = 0; i < 3; i++) {
                    printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
                    if (i < 2) {
                        printf("---|---|---\n");
                    }
                }
                printf("Vous avez gagné !\n");
                return;
            }

            
            if (tableau[0][i] == X && tableau[1][i] == X && tableau[2][i] == X) {
                for (int i = 0; i < 3; i++) {
                    printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
                    if (i < 2) {
                        printf("---|---|---\n");
                    }
                }
                printf("Vous avez gagné !\n");
                return;
            }
        }

        if ((tableau[0][0] == X && tableau[1][1] == X && tableau[2][2] == X) ||
            (tableau[0][2] == X && tableau[1][1] == X && tableau[2][0] == X)) {
            for (int i = 0; i < 3; i++) {
                printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
                if (i < 2) {
                    printf("---|---|---\n");
                }
            }
            printf("Vous avez gagné !\n");
            return;
        }

        tours++;

         if (tours == 9) {
        printf("Match nul !\n");
        for (int i = 0; i < 3; i++) {
            printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
            if (i < 2) {
                printf("---|---|---\n");
            }
        }
        return;
         }
       
    
//ordinateur
       
    char O = 'O';
    
    int choix_ordi;

        do {
        choix_ordi = rand() % 9; 
        horizontale = choix_ordi / 3;
        vertical = choix_ordi % 3;
    } while (tableau[horizontale][vertical] != ' ');

    tableau[horizontale][vertical] = O;

for (int i = 0; i < 3; i++) {
            
            for (int i = 0; i < 3; i++) {
    if (tableau[i][0] == O && tableau[i][1] == O && tableau[i][2] == O) {
        for (int i = 0; i < 3; i++) {
            printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
            if (i < 2) {
                printf("---|---|---\n");
            }
        }
        printf("L'ordinateur a gagné !\n");
        return;
    }

    if (tableau[0][i] == O && tableau[1][i] == O && tableau[2][i] == O) {
        for (int i = 0; i < 3; i++) {
            printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
            if (i < 2) {
                printf("---|---|---\n");
            }
        }
        printf("L'ordinateur a gagné !\n");
        return;
    }
}


if ((tableau[0][0] == O && tableau[1][1] == O && tableau[2][2] == O) ||
    (tableau[0][2] == O && tableau[1][1] == O && tableau[2][0] == O)) {
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
        if (i < 2) {
            printf("---|---|---\n");
        }
    }
    printf("L'ordinateur a gagné !\n");
    return;
} }

        for (int i = 0; i < 3; i++) {
            printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
            if (i < 2) {
                printf("---|---|---\n");
            }
        }

        
    tours++;
  

    }}


