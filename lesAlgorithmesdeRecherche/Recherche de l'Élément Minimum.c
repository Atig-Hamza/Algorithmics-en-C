#include <stdio.h>

int main(){
    int tableau[] = {12, 5, 8, 3, 9, 1, 7, 4, 6, 2};
    int n = sizeof(tableau) / sizeof(int);
    int min = tableau[0];

    for(int i = 1; i < n; i++) {
        if(tableau[i] < min) {
            min = tableau[i];
        }
    }

    printf("L'élément minimum est : %d\n", min);
   
}