#include <stdio.h>


void triparcomptage(int T[], int n){

    int count[n];
    for (int i = 0; i < n; i++) {
        count[i] = 0;
        for (int j = 0; j < n; j++) {
            if (T[j] < T[i]){
                count[i]++;
            }
        }
    }
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[count[i]] = T[i];
    }
    for (int i = 0; i < n; i++) {

        T[i] = temp[i];
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

    triparcomptage(T, n);
    
    printf("Apres le trie: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
}