#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int plateau() {
    int tableau[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            tableau[i][j] = ' ';
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("| %c ", tableau[i][j]);
        }
        printf("|\n");
        if (i < 2) {
            printf("------------- \n");
        }
    }
}

