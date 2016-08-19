#include <stdlib.h>
#include "list.h"

int list_size_2(List *list){  
  int i;
  i=1; /* Starting at the first node */

  /* See if list actually has a value */
  if (list == NULL){
    return 1;
  }

  List *list_dup;
  list_dup = list;

  /* Go through every node in list whilst incrementing i each time to count how many nodes we pass */
  while (list_dup->next != NULL){
    list_dup = list_dup->next;
    i++;
  }

  return i;
}

char *string_dup_2(char *str) {
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

int add_node_2(List **list, char *content){
  List *node;
  node = malloc(sizeof(List));

  if (node == NULL) {
    return 1; /* failed to allocate */
  }

  node->str = string_dup_2(content);
  /* fill node string with copy of parameter string */
  node->next = NULL;
  /* Next node is NULL because it is being inserted at the end of the list */

  if (*list == NULL){
    *list = node; /* if the list is Null then it will be equal to the new node */
  } else {
    List *search;
    search = *list;

    /* Begin to search for end of the linked list */
    while (search->next != NULL){
      search = search->next;
    }
    /* Assign second to last node's next value to new node which was inserted at the end of the list */
    search->next = node;
  }

  return 0;
}

int insert_in_list(List **list, char *content, int index){
  /*checking if index is within length of linked list */
  if (index < 0 || list_size_2(*list) <= index){
    return 1;
  }

  List *node;
  List *temp_node;

  node = malloc(sizeof(node));
  node->str = string_dup_2(content);
  temp_node = *list;

  if (index > list_size_2(*list)){
    add_node_2(list, content);
  }
  
  /* go through nodes until we reach the end of index meaning we are at the place the node should be inserted */
  while (index > 1) {
    index --;
    temp_node = temp_node->next;
  }
  node->next = temp_node->next;
  temp_node->next = node;
  return 0;
}
