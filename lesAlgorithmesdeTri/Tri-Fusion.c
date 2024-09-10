#include <stdio.h>

void fusion(int T[], int T1[], int n){
    int i = 0, j = 0, k = 0;
    while (i < n && j < n){
        if (T1[i] < T1[j]){
            T[k++] = T1[i++];
            T[k] = T1[i];
            i++;
        }
        else{
            T[k++] = T1[j++];
            T[k] = T1[j];
            j++;
        }
        k++;
    }

    while (i < n){
        T[k++] = T1[i++];
        T[k] = T1[i];
        i++;
        k++;
    }

    while (j < n){
        T[k++] = T1[j++];
        T[k] = T1[j];
        j++;
        k++;
    }
}


void trifusion(int T[], int n){

    if (n <= 1) return;
    int m = n / 2;
    trifusion(T, m);
    trifusion(T + m, n - m);
    fusion(T, T + m, n);

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

    trifusion(T, n);
    
    printf("Apres le trie: \n");
    for (int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
}
