#include <stdio.h>
#include "list.h"

int add_end_cl_list(List **, char *);

List *array_to_cl_list(char **array){
	List *node;
	node = NULL;
	int i;
	i = 0;

	while(array[i] != NULL){
		if (add_end_cl_list(&node, array[i]) == 1){
			return NULL;
		}
		i++;
	}
	return node;
}
