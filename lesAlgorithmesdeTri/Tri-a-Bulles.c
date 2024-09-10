#include <stdio.h>

void TrieaBulles(int T[], int n){
    for (int i = 0; i < n - 1 ; i++){
        for (int j = 0; j < n - i - 1 ; j++){
            if (T[j] > T[j + 1]){
                int temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
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

    TrieaBulles(T, n);
    
    
    printf("Apres le trie: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }

}