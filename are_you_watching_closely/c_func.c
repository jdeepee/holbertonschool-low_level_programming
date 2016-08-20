#include "printf_headers.h"

int c_func(va_list ap){
	char c;
	int i;

	c = (char) va_arg(ap, int);
	i = print_char(c);

	return i;
}
