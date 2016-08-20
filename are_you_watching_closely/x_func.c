#include "printf_headers.h"

int x_func(va_list ap){
	long int quotient;
	int i, j, temp, d, total;
	char hex[100];
	i=1;

	d = va_arg(ap, long int);
	quotient = d;

	while(quotient != 0){
		temp = quotient % 16;

		if (temp < 10){
			temp = temp + 48;
		} else {
			temp = temp + 87;
		}

		hex[i++] = temp;
		quotient = quotient / 16;
	}

	for (j = i - 1, total = 0; j > 0; j--, total++){
		print_char(hex[j]);
	}

	return total;
}

int X_func(va_list ap){
	long int quotient;
	int i, j, temp, d, total;
	char hex[100];
	i=1;

	d = va_arg(ap, long int);
	quotient = d;

	while(quotient != 0){
		temp = quotient % 16;

		if (temp < 10){
			temp = temp + 48;
		} else {
			temp = temp + 55;
		}

		hex[i++] = temp;
		quotient = quotient / 16;
	}

	for (j = i - 1, total = 0; j > 0; j--, total++){
		print_char(hex[j]);
	}

	return total;
}
