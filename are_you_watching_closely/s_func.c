#include "printf_headers.h"

int s_func(va_list ap){
	int i;
	char *c;

	c = va_arg(ap, char *);

	i=0;
	while(c[i] != '\0'){
		print_char(c[i]);
		i++;
	}
	return i;
}
