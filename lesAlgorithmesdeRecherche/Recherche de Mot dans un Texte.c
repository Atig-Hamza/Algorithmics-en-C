#include <stdio.h>
#include <string.h>

int main(){
    char texte[1000], mot[100];
    int i, j, trouve = 0;

    printf("Entrez le texte : ");
    fgets(texte, sizeof(texte), stdin);
    texte[strlen(texte)-1] = '\0';

    printf("Entrez le mot  recherche : ");
    scanf("%s", mot);

    for (i = 0; i < strlen(texte); i++) {
        j = 0;
        while((texte[i+j] == mot[j]) && (mot[j] != '\0')) {
            j++;
        }
        if(mot[j] == '\0'){
            trouve = 1;
            break;
        }
    }

    if(trouve == 1)
        printf("Le mot est dans le texte\n");
    else
        printf("Le mot n'est pas dans le texte\n");

    return 0;
}
