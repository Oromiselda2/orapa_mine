#include <stdio.h>
#include <locale.h>

// Définition de la hauteur des lettres de la matrice
#define HAUTEUR 5

void print_menu() {
    // Configuration de la console pour l'affichage de l'Unicode UTF-8
    setlocale(LC_ALL, "");

    // Caractère unicode "carré rouge" 🟥 et espace pour la grille
    const char* rouge = "🟥 ";
    const char* vide  = "  "; // Deux espaces pour correspondre à la largeur de l'émoji

    // Représentation matricielle 5x5 des lettres nécessaires : O, R, A, P, M, I, N, E
    // 1 représente le carré rouge, 0 représente l'espace vide.
    
    int O[HAUTEUR][5] = {
        {0,1,1,1,0},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1},
        {0,1,1,1,0}
    };

    int R[HAUTEUR][5] = {
        {1,1,1,1,0},
        {1,0,0,0,1},
        {1,1,1,1,0},
        {1,0,0,1,0},
        {1,0,0,0,1}
    };

    int A[HAUTEUR][5] = {
        {0,1,1,1,0},
        {1,0,0,0,1},
        {1,1,1,1,1},
        {1,0,0,0,1},
        {1,0,0,0,1}
    };

    int P[HAUTEUR][5] = {
        {1,1,1,1,0},
        {1,0,0,0,1},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,0,0,0,0}
    };

    int M[HAUTEUR][5] = {
        {1,0,0,0,1},
        {1,1,0,1,1},
        {1,0,1,0,1},
        {1,0,0,0,1},
        {1,0,0,0,1}
    };

    int I[HAUTEUR][3] = { // Lettre I plus étroite (3 colonnes)
        {1,1,1},
        {0,1,0},
        {0,1,0},
        {0,1,0},
        {1,1,1}
    };

    int N[HAUTEUR][5] = {
        {1,0,0,0,1},
        {1,1,0,0,1},
        {1,0,1,0,1},
        {1,0,0,1,1},
        {1,0,0,0,1}
    };

    int E[HAUTEUR][5] = {
        {1,1,1,1,1},
        {1,0,0,0,0},
        {1,1,1,1,0},
        {1,0,0,0,0},
        {1,1,1,1,1}
    };

    printf("Génération du logo textuel Orapa Mine :\n\n");

    // Affichage ligne par ligne pour aligner les lettres horizontalement
    for (int ligne = 0; ligne < HAUTEUR; ligne++) {
        
        // --- MOT 1 : ORAPA ---
        // Lettre O
        for (int c = 0; c < 5; c++) printf("%s", O[ligne][c] ? rouge : vide);
        printf(" "); // Espace entre les lettres
        
        // Lettre R
        for (int c = 0; c < 5; c++) printf("%s", R[ligne][c] ? rouge : vide);
        printf(" ");
        
        // Lettre A
        for (int c = 0; c < 5; c++) printf("%s", A[ligne][c] ? rouge : vide);
        printf(" ");
        
        // Lettre P
        for (int c = 0; c < 5; c++) printf("%s", P[ligne][c] ? rouge : vide);
        printf(" ");
        
        // Lettre A
        for (int c = 0; c < 5; c++) printf("%s", A[ligne][c] ? rouge : vide);

        // --- ESPACE INTER-MOTS ---
        printf("      "); 

        // --- MOT 2 : MINE ---
        // Lettre M
        for (int c = 0; c < 5; c++) printf("%s", M[ligne][c] ? rouge : vide);
        printf(" ");
        
        // Lettre I
        for (int c = 0; c < 3; c++) printf("%s", I[ligne][c] ? rouge : vide);
        printf(" ");
        
        // Lettre N
        for (int c = 0; c < 5; c++) printf("%s", N[ligne][c] ? rouge : vide);
        printf(" ");
        
        // Lettre E
        for (int c = 0; c < 5; c++) printf("%s", E[ligne][c] ? rouge : vide);

        // Fin de la ligne courante
        printf("\n");
    }

    printf("\n");
}
