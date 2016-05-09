#include "list.h"
#include <stdlib.h>

void free_node(List *node) { /* free each node */
  free(node->str);
  free(node);
}

void free_list(List *list) { 
  List *n;

  while (list != NULL) { /* loop through each node and free each one */
    n = list;
    list = list->next;
    free_node(n);
  }
}
