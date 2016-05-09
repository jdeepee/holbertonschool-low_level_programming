#include "list.h"
#include <stdlib.h>
#include <stdio.h>

void string_copy(char *src, char *dest) { /* function to copy a string */
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

int len(char *s)
{
    int count=0;
    while(*s != '\0')
    {
        count++;
        s++;
    }
    return(count);
}

int add_node(List **list, char *str){
	List *node;

	node = malloc(sizeof(list));
	if (node == NULL){
		return (1);
	}

	node->str =  malloc(sizeof(char) * len(str));
  	string_copy(str, node->str); /*add to start of list */
	node->next = NULL;

	if (*list == NULL){
		*list = node;
	} else {
		(*list)->next = node;
	}
	return 0;
}
