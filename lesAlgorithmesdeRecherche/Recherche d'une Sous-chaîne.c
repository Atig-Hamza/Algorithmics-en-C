#include <stdio.h>

int main(){

    char chaine[1000], sousChaine[100];
    int i, j, trouver = 0;

    printf("Entrez la chaine : ");
    fgets(chaine, sizeof(chaine), stdin);
    chaine[strlen(chaine)-1] = '\0';

    printf("Entrez la sous-chaine  recherche : ");
    scanf("%s", sousChaine);

    for (i = 0; i < strlen(chaine); i++) {
        j = 0;
        while((chaine[i+j] == sousChaine[j]) && (sousChaine[j] != '\0')) {
            j++;
        }
        if(sousChaine[j] == '\0'){
            trouver = 1;
            break;
        }
    }

    if(trouver == 1)
        printf("La sous-chaine est dans la chaine\n");
    else
        printf("La sous-chaine n'est pas dans la chaine\n");

}