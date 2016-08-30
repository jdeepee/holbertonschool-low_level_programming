#include <stdlib.h>
#include "list.h"

int print_char(char c);
void print_string(char *str);

void print_dcl_list(List *list){
	List *node;
	node = list;
	while (node->next != list){
		print_string(node->str);
		print_char('\n');
		print_char('\t');
		if (node->prev == NULL){
			print_string("NULL");
		} else {
			print_string(node->prev->str);
		}
		print_char('\n');
		print_char('\t');
		if (node->next == NULL){
			print_string("NULL");
		} else {
			print_string(node->next->str);
		}
		print_char('\n');
		node = node->next;
	}
	print_string(node->str);
	print_char('\n');
	print_char('\t');
	print_string(node->prev->str);
	print_char('\n');
	print_char('\t');
	print_string(node->next->str);
	print_char('\n');
}
