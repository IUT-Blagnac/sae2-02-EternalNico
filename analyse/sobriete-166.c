#include <stdio.h>
#include <time.h>

int main(int nbrArg, char** listArg)
{

  //Code rajouté
  float time = 0;
  int compteur = 0;
  //

  if (nbrArg == 1)
    return 0;
  int a=0;
  int b=0;

  while(listArg[1][a] != '\0')
  {
    listArg[1][b++] = (listArg[1][a] == ' ' && listArg[1][a + 1] != ' ' && listArg[1][a - 1] != ' ') ? (listArg[1][++a]) : (listArg[1][a]);
      a++,compteur++;//compteur ajouté

  }
  listArg[1][b] = '\0';

  printf("[%s]", listArg[1]);

   //Code rajouté
  time = clock();
    printf("\nTemps d'execution = %.2f ms", time);
    printf("\nNombre d'itération(s) = %d fois", compteur);

    printf("\n %d octets pour variable de type int nommée 'a' ",sizeof(int));
    printf("\n %d octets pour variable de type int nommée 'b' ",sizeof(int));
    printf("\n %d octets pour variable de type int nommée 'nbrArg' ",sizeof(int));
    printf("\n %d octets pour le tableau de char nommée 'listArg' ",sizeof(char **));
  //

  return 0;
}
