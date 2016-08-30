#include <string.h>
#include <stdlib.h>
#include "list.h"

int add_end_dcl_list(List **list, char *str){
	List *node;
	List *temp;
	List *first_node;
	node = malloc(sizeof(List));
	temp = *list;
	if (node == NULL) {
		return 1;
	}
	node->str = strdup(str);

	if (temp != NULL) {
		while (temp->next != *list){
			temp = temp->next;
		}
		temp->next = node;
		temp->prev = temp;
	} else {
		node->next = node;
		*list = node;
	}
	node->prev = temp;
	node->next = *list;
	first_node = *list;
	first_node->prev = node;
	return 0;
}

int add_begin_dcl_list(List **list, char *str){
	List *node;
	List *temp;
	List *first_node;
	temp = *list;
	first_node = *list;
	node = malloc(sizeof(List));

	if (node == NULL){
		return 1;
	}
	node->str = strdup(str);

	if (temp != NULL){
		while(temp->next != *list){
			temp = temp->next;
		}
		node->next = *list;
		node->prev = temp;
		temp->next = node;
		first_node->prev = node;
	} else {
		node->next = node;
	}
	*list = node;
	return 0;
}
