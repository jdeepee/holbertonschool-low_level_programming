#include "list.h"
#include <stdlib.h>

int list_size(List *list){  
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
