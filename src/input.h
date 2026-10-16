void flushStdin () ;
  
// Renvoie la saisie de l'utilisateur.
// Redemande la saisie tant que ce n'est pas le cas.
/* Les saisies possibles sont : 
        - un nombre seul pour désigner la case par laquelle rentre le rayon.
        - une lettre parmi { R, Y, B, W, w } suivie de deux nombres, tel que R 5 13
*/

int read_input(int nb_rows, int nb_cols, int* ret_qu, char* ret_color, int* ret_x, int* ret_y, char* ret_orientation) ;
void display_answer(int exit_square, char* couleur) ;
void display_proposition(bool answer) ;
void display_grid() ;


