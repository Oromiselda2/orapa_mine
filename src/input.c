#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

/// Functions used for interfacing with User 
// Do not modify this file



// Sera expliquée plus tard
void flushStdin () {
  char c;
  while ((c = getchar()) != '\n' && c != EOF)
    { }
}



// Fonction auxiliaire
int compute_int(int n, int digit) {
    int x = n ;
    int p = 1 ;
    while (x > 0) {
        x = x/10 ;
        p *= 10 ;
    }
    return p*digit + n ;
}

// Renvoie la saisie de l'utilisateur.
// Redemande la saisie tant que ce n'est pas le cas.
/* Les saisies possibles sont : 
        - Une question : un nombre seul pour désigner la case par laquelle rentre le rayon.
        - Une proposition : de la forme Couleur X_coord Y_coord Orientation, par exemple R 5 3 H
        - Un abandon : GAME OVER
   Renvoie 0 si abandon
   Renvoie 1 si question, auquel cas l'entier lu est dans le pointeur n
   Renvoie 2 si proposition, auquel cas les valeurs utiles sont dans les pointeurs restants.
*/
int read_input(int nb_rows, int nb_cols, int* ret_qu, char* ret_color, int* ret_x, int* ret_y, char* ret_orientation) {
    int perimeter = 2*(nb_rows+nb_cols) ;
    printf("A votre tour : ") ;
    char c = getchar() ;
    while (true) {
        if (c == 'Q') {
            int m ;
            int nb = scanf(" %d", &m) ;
            if (nb == 1 && 0 < m && m <= perimeter) {
                *ret_qu = m ;
                flushStdin() ;
                return 1 ;
            }
        } else if (c == 'G') {
                char s[9] ;
                scanf("%8s", s) ;
                s[8] = 0 ;
                char s2[9] = "AME" ;
                if (strcmp(s, s2) == 0) {
                    flushStdin() ;
                    return 0 ;
                }
            } else {
                if (c == 'R' || c == 'Y' || c == 'B' || c == 'W' || c == 'w') {
                    int n, m ;
                    int nb = scanf("%d %d ", &n, &m) ;
                    *ret_color = c ;
                    if (nb == 2 && 0 <= n && n < nb_rows && 0 <= m && m < nb_cols) {
                        *ret_x = n ;
                        *ret_y = m ;
                        if (c == 'w') {
                            flushStdin() ;
                            return 2 ;
                        } else {
                            char orientation = getchar() ;
                            if ((c == 'R' && (orientation == 'V' || orientation == 'H')) || 
                                (c != 'R' && (orientation == 'N' || orientation == 'S' || 
                                            orientation == 'E' || orientation == 'O' ))) {
                                *ret_orientation = orientation ;
                                flushStdin() ;
                                return 2 ;
                            }
                        }
                    }
                }    
            }
        printf("Saisie erronée, recommencez : ") ;
        flushStdin() ;
        c = getchar () ;
    }
    assert(false) ;
    return 0 ;
}
// Rmq : il faudrait faire le test combiné pour vérifier que la couleur c et l'orientation 
// sont compatibles avec les coordonnées, par exemple pour la pieces 'w', il faut 
// x > 0 et y > 0.



/*
Couleurs de sortie possible : 

R = Rouge
Y = Jaune
B = Bleu
W = Blanc
I = Incolore

O = Orange (rouge + jaune)
V = Vert (bleu + jaune)
P = Violet (rouge + bleu)

N = Noir (rouge + bleu + jaune)
G = Gris (noir + blanc)

PI = Rose (rouge + blanc)
JC = Jaune Clair (jaune + blanc)
BC = Bleu Clair (bleu + blanc)

OC = Orange Clair
VC = Vert Clair
PC = Violet Clair

*/
// Fonction complète
void display_answer(int exit_square, char* couleur) {
    printf("%c %d\n", couleur, exit_square) ;
}

// Fonction complète mais peut être changée
void display_proposition(bool answer) {
    if (answer)
        printf("Oui bravo !\n") ;
    else
        printf("FAUX, +100 points !\n") ;
}


// Fonction à écrire. Arguments à ajouter.
void reveal_grid() {
    
}



