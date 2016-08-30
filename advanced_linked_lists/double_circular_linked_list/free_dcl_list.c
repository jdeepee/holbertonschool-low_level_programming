#include "list.h"
#include <stdlib.h>

void free_dcl_list(List *list){
	List *node;
	List *temp_node;
	node = list;

	while(node->next != list){
		temp_node = node;
		node = node->next;
		free(temp_node->str);
		free(temp_node)
	}
	free(node->str);
	free(node);
}	
