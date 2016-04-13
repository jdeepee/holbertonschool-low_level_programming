#include <stdlib.h>

char *string_dup(char *str) {
  char *str_copy = str;
  int str_len = 0;
  char *aloc;
  char *aloc_copy;

  while (*str_copy != 0) {
    str_len++;
    str_copy++;
  }

  aloc = malloc(sizeof(char) * (str_len+1));

  if (aloc == NULL){
    return NULL; /* Failed to allocate. */
  }

  aloc_copy = aloc;
  str_copy = str;
  while (*str_copy != 0) {
    *aloc_copy = *str_copy;
    aloc_copy++;
    str_copy++;
  }
  *aloc_copy=0;

  return aloc; /* return STR */
}
