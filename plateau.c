#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

#include "tic-tac-toe.h"


char tableau[3][3]; 

void plateau() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tableau[i][j] = ' '; 
        }
    }

    for (int i = 0; i < 3; i++) {
                    printf(" %c | %c | %c \n", tableau[i][0], tableau[i][1], tableau[i][2]);
                    if (i < 2) {
                        printf("---|---|---\n");
                    }}
}


