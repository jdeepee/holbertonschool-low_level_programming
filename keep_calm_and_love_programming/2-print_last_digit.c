#include "my_functions.h"

void print_last_digit(int n)
{
	char c;

	if (n > 0)
	{
		n=n%10;
		c=n+'0';
		print_char(c);
	} else if (n < 0){
		n=n*-1%10;
		c=n+'0';
		print_char(c);
	} else {
		c=n+'0';
		print_char(c);
	}

}
