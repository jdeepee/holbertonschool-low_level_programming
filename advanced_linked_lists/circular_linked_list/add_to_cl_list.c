#include <string.h>
#include <stdlib.h>
#include "list.h"

int add_end_cl_list(List **list, char *str){
	List *node;
	List *last_node;
	node = malloc(sizeof(List));
	last_node = *list;
	if (node == NULL){
		return 1;
	}

	node->str = strdup(str);

	if(*list != NULL){
		while(last_node->next != *list){
			last_node = last_node->next;
		}
		last_node->next = node;
	} else {
		*list = node;
	}
	node->next = *list;
	return 0;
}

int add_begin_cl_list(List **list, char *str){
	List *node;
	List *last_node;
	last_node = *list;
	node = malloc(sizeof(List));

	if (node == NULL){
		return 1;
	}

	node->str = strdup(str);

	if (*list != NULL){
		while (last_node->next != *list) {
			last_node = last_node->next;
		}

		last_node->next = node;
		node->next = *list;
		node->prev = last_node;
	} else {
		node->next = node;
	}
	*list = node;
	return 0;
}
