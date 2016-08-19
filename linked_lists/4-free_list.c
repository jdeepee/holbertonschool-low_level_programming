#include "list.h"
#include <stdlib.h>

void free_list(List *list) { 
  List *temp;

  /* Going through each node in linked list until we reach last node where the next value is NULL */
  while(list->next != NULL){
  	temp = list;
  	list = list->next;
  	free(temp->str);
  	free(temp);
  }

  /* If next is NULL i.e it is the last node then free it. First while loop doesnt free last node */
  if (list->next == NULL) {
    free(list->str);
    free(list);
  }
}
