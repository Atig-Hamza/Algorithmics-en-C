#include <stdio.h>

void triparselection(int T[], int n){
    int c;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if ( T[i] > T[j] ) {
                c = T[i];
                T[i] = T[j];
                T[j] = c;
            }
        }
    }
}

int main(){
    int T[100];
    int n;
    printf("entre le nombre d'elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("entre l'element %d: ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("Avant le tri: \n");

    for (int i = 0; i < n; i++){
        printf("%d ", T[i]);
        if (i==n-1) printf("\n");
    }

    triparselection(T, n);
    
    printf("Apres le trie: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
}