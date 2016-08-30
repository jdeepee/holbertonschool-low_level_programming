#include <stdlib.h>
#include <string.h>
#include "list.h"

int add_end_dl_list(List **list, char *str){
	List *node;
	List *temp;
	temp = *list;
	node = malloc(sizeof(List));

	if (node == NULL){
		return 1;
	}

	node->str = strdup(str);
	node->next = NULL;

	if (temp == NULL){
		node->prev = NULL;
		*list = node;
	} else {
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = node;
    	node->prev = temp;
	}
	return 0;
}

int add_begin_dl_list(List **list, char *str){
	List *node;
	List *temp;
	temp = *list;
	node = malloc(sizeof(List));

	if (node == NULL){
		return 1;
	}

	node->str = strdup(str);
	node->next = *list;
	node->prev = NULL;

	if (temp != NULL){
		temp->prev = node;
	}

	return 0;
}
