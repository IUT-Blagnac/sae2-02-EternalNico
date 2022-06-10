#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "solution1.c"
#include "solution2.c"

int main() {
    //Test 1
  printf("%s\n",erase("Cou cou  J M  B"));

   //Test 2
  char chaine[] = "Cou cou  J M  B"; 
  printf("'%s'\n",erase2(chaine));
  return 0;
}
