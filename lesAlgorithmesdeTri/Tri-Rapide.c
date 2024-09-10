#include <stdio.h>


void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


int partition(int T[], int debut, int fin) {
    int pivot = T[fin];
    int i = debut - 1;

    for (int j = debut; j < fin; j++) {
        if (T[j] <= pivot) {
            i++;
            echanger(&T[i], &T[j]);
        }
    }
    echanger(&T[i + 1], &T[fin]);
    return (i + 1);
}


void trirapide(int T[], int debut, int fin) {
    if (debut < fin) {
        int pi = partition(T, debut, fin);

        trirapide(T, debut, pi - 1);
        trirapide(T, pi + 1, fin);
    }
}

int main() {
    int T[100];
    int n;

    printf("Entrez le nombre d'elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d: ", i + 1);
        scanf("%d", &T[i]);
    }

    printf("Avant le tri: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    trirapide(T, 0, n - 1);

    printf("Après le tri: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");

    return 0;
}
