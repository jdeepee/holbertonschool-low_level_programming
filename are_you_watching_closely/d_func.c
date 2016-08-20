#include "printf_headers.h"

int d_func(va_list ap){
	int data, i;

	data = va_arg(ap, int);
	i = print_number(data);
	return i;
}
