#include <stdio.h>
#include <time.h>

int main(int nbrArg, char** listArg)
{

  //Code rajouté
  float time = 0;
  int compteur = 0;

  if (nbrArg == 1)
    return 0;
  int a=0;
  int b=0;

  while(listArg[1][a] != '\0')
  {
    listArg[1][b++] = (listArg[1][a] == ' ' && listArg[1][a + 1] != ' ' && listArg[1][a - 1] != ' ') ? (listArg[1][++a]) : (listArg[1][a]);
      a++,compteur++;

  }
  listArg[1][b] = '\0';

  printf("[%s]", listArg[1]);

   //Code rajouté
  time = clock();
    printf("\nTemps d'execution = %.2f ms", time);
    printf("\nNombre d'itération(s) = %d fois", compteur);
  return 0;
}
