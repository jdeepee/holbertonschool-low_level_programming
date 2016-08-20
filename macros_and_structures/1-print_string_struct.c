#include <stdio.h>
#include "str_struct.h"

void print_string_struct(struct String *str){
	printf("%s", str->str);
	printf("%s", ", ");
	printf("%d", str->length);
}
