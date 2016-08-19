#include "list.h"
#include <stdlib.h>

void rev_list(List **list){
  if (list == NULL){
    return;
  }

  List *node;
  List *next_node;
  List *prev_node;

  node = *list;
  next_node = node->next;
  node->next = NULL;

  while(next_node != NULL){
    prev_node = node;
    node = next_node;
    next_node = node->next;
    node->next = prev_node;
    prev_node = node;
  }
  *list = node;
}
