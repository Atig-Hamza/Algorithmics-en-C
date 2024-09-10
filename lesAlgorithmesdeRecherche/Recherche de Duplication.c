#include <stdio.h>


int main(){
    int tableau[] = {12, 5, 8, 3, 9, 1, 7, 4, 6, 2, 12, 5, 8, 3, 9, 1, 7, 4, 6, 2};
    int n = sizeof(tableau) / sizeof(int);
    int trouver = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(tableau[i] == tableau[j]) {
                trouver = 1;
                break;
            }
        }
        if(trouver == 1) {
            break;
        }
    }

    if(trouver == 1)
        printf("Il y a une duplication dans le tableau\n");
    else
        printf("Il n'y a pas de duplication dans le tableau\n");


}