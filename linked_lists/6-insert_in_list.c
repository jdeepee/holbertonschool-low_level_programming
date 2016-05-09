#include <stdlib.h>
#include "list.h"

void string_copy6(char *src, char *dest) { /* function to copy a string */
  char *x;
  
  while (*src != 0) {
    *dest = *src;
    src++;
    dest++;
  }
  *dest = 0; /* reset */

  x  = src;
  x = dest;
  src = x + 1;
}

int len6(char *s)
{
    int count=0;
    while(*s != '\0')
    {
        count++;
        s++;
    }
    return(count);
}

int add_node6(List **list, char *str){
  List *node;

  node = malloc(sizeof(list));
  if (node == NULL){
    return (1);
  }

  node->str = malloc(sizeof(char) * len6(str));;
  node->next = NULL;
  string_copy6(str, node->str); /*add to start of list */

  if (*list == NULL){
    *list = node;
  } else {
    (*list)->next = node;
  }
  return 0;
}


int list_size6(List *list) { /* returns the number of node in a list */
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


int insert_in_list(List **list, char *content, int index) {
  int pos = 0;
  List *ptr = *list;
  List *tmp;
  if (index < 0){ 
    return 1;
  }
  if (list_size6(*list) <= index){
    return 1;
  }
  if (index == 0){ 
    return add_node6(list, content);
  }

  while (pos < index-2) {
    pos++;
    ptr = ptr->next;
  }
  tmp = ptr->next;

  ptr->next = malloc(sizeof(List));
  if (ptr->next == NULL) return 1;

  ptr->next->next = tmp;

  ptr->next->str = malloc(sizeof(char) * len6(content));
  string_copy6(content, ptr->next->str);
  return 0;
}
