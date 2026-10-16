#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include "input.h"
#include "menu.h"
#include "board.h"
#include "game.h"


// This file should not be modified, except if you'd like to enhance the main menu.
// with awesome ASCII ART


int main () {
    // Initialisation du Random
    srand( time( NULL ) );
        
    print_menu() ;
    while (true) {
        printf("Veuillez choisir une difficulté : ") ;
        int diff = -1 ;
        scanf("%d", &diff) ;
        flushStdin() ;
        while (diff < 0) {
            printf("Saisie erronée, veuillez réessayer : ") ;
            scanf("%d", &diff) ;
            flushStdin() ;
        }
        play(diff) ;
        printf("On rejoue ? (Y/N) ") ;
        char answer = getchar() ;
        if (answer != 'Y' && answer != 'y') {
            printf("Au revoir !\n") ;
            exit(0) ;
        } else {
            system("clear") ;   // Clear Terminal
        }
    }
}
