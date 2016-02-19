#include "print_char.c"

void print_last_digit(int n)
{
	if (n > 0)
	{
		n=n%10;
		print_char(n);
	} else if (n < 0){
		n=n*-1%10;
		print_char(n);
	} else {
		print_char(n);
	}

}
