#include <stdio.h>
#include <stdlib.h>
    
void trieparinsertion(int T[], int n){
    for (int i = 1; i < n; i++){
        int cle = T[i];
        int j = i - 1;
        while (j >= 0 && T[j] > cle){
            T[j + 1] = T[j];
            j--;
        }
        T[j + 1] = cle;
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

    trieparinsertion(T, n);
    
    printf("Apres le trie: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
}