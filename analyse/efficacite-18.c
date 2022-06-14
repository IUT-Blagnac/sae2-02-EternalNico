#include <stdlib.h>

#define K 10

char *erase(const char* str) {
  char *copy = NULL;  // memory for the result; allocated on the fly
  size_t b = 0;  // number of allocated blocks
  size_t n = 0;  // number of allocated characters (1 char = 1 byte)
  size_t i = 0;  // input string index
  size_t j = 0;  // result string index
  int space_zone = 0;  // inside a space zone or not (2 or more spaces)

  while (1) {

    /*
     * In this code, we avoid to compute strlen(str) in order to traverse
     * the input string only once. This could improve the performances when
     * the string does not fit in the cache memory.
     *
     * As a consequence, we cannot allocate the result string with a single
     * malloc(), and we need to call realloc() from time to time.
     */
    b++;  // claiming one more block
    n = b << K;
    copy = realloc(copy, n);  // ask for b * 2**K bytes
    if (copy == NULL) {
      return "erase:realloc failed";
    }

    while (j < n) {
      int do_copy;  // should str[i] be copied?
      if (str[i] == ' ') {
        if (space_zone  // already in a space zone
            || str[i + 1] == ' ') {  // or beginning a space zone
          space_zone = 1;
          do_copy = 1;
        } else {
          do_copy = 0;  // skipping single space
        }
      } else {
        space_zone = 0;
        do_copy = 1;
      }
      if (do_copy) {
        copy[j] = str[i];
        if (copy[j] == '\0') {  // just copied the end of string
          return realloc(copy, j + 1);  // removing useless allocation
        }
        j++;
      }
      i++;
    }
  }
}
