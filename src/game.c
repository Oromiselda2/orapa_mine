#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "board.h"
#include "input.h"


/// Ceci est le fichier principal qui doit contenir le moteur du jeu.
/// A compléter



// Aléa : tire aléatoirement entre 0 et int_max-1
int random_int(int int_max) {
    int n = rand() ;
    return n % int_max ;
}


void play(int difficulty) {
    int score = 0 ;
    
    
    int question ;
    char color ;
    int x ;
    int y ;
    char orientation ;
    int rep = read_input(10,8, &question, &color, &x, &y, &orientation) ;
    printf("%d %d %c %d %d %c\n", rep, question, color, x, y, orientation) ;
    
    // afficher le score en fin de partie.
}

 

