#include <unistd.h>
#include <stdarg.h>
#include "printf_headers.h"

typedef struct spec_structure {
  char type;
  int (*spec_func)(va_list ap);
} spec_structure;

int which_function(char c, va_list ap){
	spec_structure spec_structure_array[] = {
									{'d', &d_func},
									{'i', &i_func},
									{'c', &c_func},
									{'o', &o_func},
									{'u', &u_func},
									{'x', &x_func},
									{'X', &X_func},
									{'s', &s_func},
									{'p', &p_func},
									{'%', &percentage_func},
									{'\0', NULL}
								};

	int ret, i;
	ret = 0;

	for(i = 0; spec_structure_array[i].type != '\0'; i++){
		if (spec_structure_array[i].type == c){
			ret = spec_structure_array[i].spec_func(ap);
            return ret;
		}
	}

	return ret;
}

int printf(const char *format, ...){
	va_list ap;
	va_start(ap, format);

	int i, check, i2;
	i=0;
	i2=0;

	while(format[i] != '\0'){
		if(format[i] == '%'){
			check = which_function(format[i+1], ap);
			if (check > 0){
				i++;
				i2 += (check-2);
			} else {
				print_char(format[i]);
			}
		} else {
			print_char(format[i]);
		}
		i++;
	}
	va_end(ap);
	i2 += i;
	return i2;
}
