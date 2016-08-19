#include "list.h"
#include <stdlib.h>

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

int add_node(List **list, char *content){
  List *node;
  node = malloc(sizeof(List));

  if (node == NULL) {
    return 1; /* failed to allocate */
  }

  node->str = string_dup(content);
  /* fill node string with copy of parameter string */
  node->next = NULL;
  /* Next node is NULL because it is being inserted at the end of the list */

  if (*list == NULL){
    *list = node; /* if the list is Null then it will be equal to the new node and will be the first node in the list*/
  } else {
    List *search;
    search = *list;

    /* Begin to search for end of the linked list by checking next value of temporary node until it is NULL meaning there is node after the current node*/
    while (search->next != NULL){
      search = search->next;
    }
    /* Assign second to last node's next value to new node which was inserted at the end of the list */
    search->next = node;
  }

  return 0;
}
