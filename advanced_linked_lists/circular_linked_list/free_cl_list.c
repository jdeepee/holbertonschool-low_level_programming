#include <stdlib.h>
#include "list.h"

void free_cl_list(List *list){
	List *node;
	List *temp;
	node = list;

	while(list->next != node){
		temp = list;
		list = list->next;
		free(temp->str);
		free(temp);
	}
	free(list->str);
	free(list);
}
