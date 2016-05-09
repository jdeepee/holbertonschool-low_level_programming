#include <stdlib.h>
#include "list.h"

char *string_copy(char *dest, const char *src){
	int i=0;
	
	while (*src != '\0'){
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return &(dest[-i]);
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

char *str_dup(char *s){
	char *d = malloc(len(s) + 1);
	if (d == NULL) {
		return NULL;
	}
	string_copy(d,s);                       
	return d;                          
}

int add_node(List **list, char *str){
	List *node;

	node = malloc(sizeof(list));
	if (node == NULL){
		return(1);
	}

	node->str = str_dup(str);
	node->next = *list;
	*list = node;
	return (0);
}
