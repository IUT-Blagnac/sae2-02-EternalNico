#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "solution.h"

/** Permet de supprimer seulement les espaces individuels d'une chaîne de caractère
 * @param IN chaine : La chaîne de caractère à tester
 *
**/
char* erase(char* chaine) {
  //Déclaration des attributs neécessaires
  char* ChaineSE = calloc(strlen(chaine),sizeof(int)), i = 0, j = 0;
   
   while (chaine[i] != '\0')//Tant que je n'atteint pas la dernière case du tableau
   {
       //Si il y a des espaces consécutifs dans la chaines de caractères
      if ((chaine[i] == ' ' && chaine[i+1] != ' ' && chaine[i-1] != ' ') != 1) {
        ChaineSE[j] = chaine[i];
        j++;
      }
      i++;
   }
   
   //Dernière case du tableau
   ChaineSE[j] = '\0';

   //Affichage de la chaîne de caractère sans les espaces simples 
   printf("Après la suppression des espaces :'%s' ", ChaineSE);
   
   //Libération de la mémoire
   free(ChaineSE);
}

