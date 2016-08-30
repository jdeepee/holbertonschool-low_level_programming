#include <stdio.h>
#include "list.h"

int print_char(char);
void print_string(char *str);

void print_dl_list(List *list){
	List *node;
	node = list;

	while(node){
		print_string(node->str);
		print_char('\n');

		if (node->prev != NULL){
			print_char('\t');
			print_string(node->prev->str);
			print_char('\n');
		} else {
			print_string("\tNULL\n");
		}

		if (node->next != NULL){
			print_char('\t');
			print_string(node->next->str);
			print_char('\n');
		} else {
			print_string("\tNULL\n");
		}
		node = node->next;
	}
}

void print_string(char *str){
	int i;
	i=0;

	while(str[i] != '\0'){
		print_char(str[i]);
		i++;
	}
}

