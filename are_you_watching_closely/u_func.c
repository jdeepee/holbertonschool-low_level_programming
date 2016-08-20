#include "printf_headers.h"

int u_func(va_list ap){
	unsigned int i;
	int n;

	i = va_arg(ap, unsigned int);
	n = print_number(i);
	return n;
}
