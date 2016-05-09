#include "list.h"
#include <stdlib.h>

int list_size(List *list) { /* returns the number of node in a list */
  int count = 1;

  if (list == NULL) { /* if no nodes */
  	return 0;
  }

  while (list->next != NULL) {
    list = list->next;
    count++;
  }
  return count;
}
