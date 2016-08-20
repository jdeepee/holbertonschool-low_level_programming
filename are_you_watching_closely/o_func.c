#include "printf_headers.h"

int o_func(va_list ap){
	unsigned int d;
	int rem, i, octal;

	i=1;
	octal=0;

	d = va_arg(ap, unsigned int);

	while(d != 0){
		rem = d%8;
		d /= 8;
		octal += rem*i;
		i *= 10;
	}
	print_number(octal);
	return 1;
}
