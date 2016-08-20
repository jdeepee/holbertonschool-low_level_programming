#include "printf_headers.h"

int p_func(va_list ap){
	char hex_array[100];
	unsigned long int addr, mod;
	int i, i2, total;

	addr = va_arg(ap, unsigned long int);

	i=0;
	while(addr != 0){
		mod = addr % 16;
		if (mod < 10) {
			mod += 48;
		} else {
			mod += 87;
		}
		hex_array[i] = mod;
		addr /= 16;
		i++;
	}

	print_char('0');
	print_char('x');

	i2 = i - 1;
	total = i2 + 2;

	while (i2) {
		print_char(hex_array[i2--]);
	}
	return total;        
}
