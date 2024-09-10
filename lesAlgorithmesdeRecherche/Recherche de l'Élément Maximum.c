#include <stdio.h>

int main(){
    int tableau[] = {12, 5, 8, 3, 9, 1, 7, 4, 6, 2};
    int n = sizeof(tableau) / sizeof(int);
    int max = tableau[0];

    for(int i = 1; i < n; i++) {
        if(tableau[i] > max) {
            max = tableau[i];
        }
    }

    printf("L'élément maximum est : %d\n", max);
   
}