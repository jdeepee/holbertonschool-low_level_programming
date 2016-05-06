#include "str_struct.h"
#include <stdio.h>

int print_char(char c);

void print_string_struct(struct String *str){
	int i;
	i = 0;

	while (i < str->length){
		print_char(str->str[i]);
		i++;
	}
	print_char(',');
	print_char(' ');
	print_char(i + '0');
	print_char('\n');
}
