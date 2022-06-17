#include <stdio.h>
//code ajouté
#include <time.h>
#include <stdlib.h>
#include <string.h>
//

char* erase(char* chaine) {
    int i = 0, j = 0;
    int taille = strlen(chaine);
    char* newChaine = malloc( sizeof(char) * taille);

    //Code ajouté
    int compteur = 0;
    float time = 0;
    //

    while(chaine[i] != '\0'){
        if(chaine[i] != ' '){
          newChaine[j] = chaine[i];
          j++;

        }else if(chaine[i] == ' ' && chaine[i+1] == ' '){
          newChaine[j] = chaine[i];
          j++;

        }else if( i > 0 && chaine[i] == ' ' && chaine[i-1] == ' '){
          newChaine[j] = chaine[i];
          j++;

        }
    i++,compteur++;//ajout de compteur    
    }
    
   

    newChaine[j] = '\0';

    //Code rajouté
    time = clock();
    printf("\nTemps d'execution = %.2f ms", time);
    printf("\nNombre d'itération(s) = %d fois", compteur);
    

    printf("\n %d octets pour variable de type int nommée 'i' ",sizeof(int));
    printf("\n %d octets pour variable de type int nommée 'j' ",sizeof(int));
    printf("\n %d octets pour variable de type int nommée 'taille' ",sizeof(int));
    printf("\n %d octets pour le tableau de char nommée 'chaine' ",sizeof(char *));
    printf("\n %d octets pourle tableau de char nommée 'newChaine' ",sizeof(char *));
    //

    return newChaine;
}

void main(){
   printf("\nChaine de caractère  = '%s' ", erase("issou  chancla  "));
}