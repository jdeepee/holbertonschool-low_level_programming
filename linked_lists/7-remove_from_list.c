#include <stdlib.h>
#include "list.h"

void free_node(List *list);

void remove_from_list(List **list, int index){
  List *before_node;
  List *target_node;
  before_node = *list;
  target_node = *list;

  int index_dup;
  index_dup = index - 1;

  /* Finding node which we will delete and assigning it to target_node */
  for(; index > 0; index--){
    target_node = target_node->next;
  }

  /*finding node before node to delete so we can link list back together after deleting target node */
  for(; index_dup > 0; index_dup--){
    before_node = before_node->next;
  }

  before_node->next = target_node->next;

  free_node(target_node);
} 

void free_node(List *list){
  free(list->str);
  free(list);
}

