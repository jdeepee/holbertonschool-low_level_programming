#include "str_struct.h"
#include <stdio.h>

int print_char(char c);
void print_string(char *str);

void print_string(char *str) {
  while (*str != 0) {
    print_char(*str);
    str++;
  }
}

void print_string_struct(struct String *str){
	print_string(str->str);
	print_char(',');
	print_char(' ');
	print_char(str->length + '0');
	print_char('\n');
}
