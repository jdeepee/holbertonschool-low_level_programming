#include <stdlib.h>
#include "list.h"

char *string_dup(char *str) {
  char *copystr = str;
  int strln = 0;
  while (*copystr != 0) {
    copystr++;
    strln++; /* Getting the length */
  }
  char *ret;
  char *retc;
  ret = malloc(sizeof(char) * (strln+1));

  if (ret == NULL) return ret; /* Failed to allocate the memory. */

  retc = ret;
  copystr = str;
  while (*copystr != 0) {
    *retc = *copystr;
    retc++;
    copystr++;
  }
  *retc=0;
  
  return ret; /* return 'holberton' (*str ) */
}

int add_node(List **list, char *str){
  List *node;
  node = malloc(sizeof(List));

  if (node == NULL) {
    return 1;
  }

  node->str = string_dup(str);
  node->next = *list;

  *list = node;

  return 0;
}
