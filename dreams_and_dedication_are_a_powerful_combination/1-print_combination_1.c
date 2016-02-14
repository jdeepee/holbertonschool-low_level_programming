#include "my_functions.h"

void print_combination_1(void)
{
	int i=0;
	char output;

	for(; i<10; i++)
	{
		output= i+'0';
		print_char(output);
		if (i < 9)
		{
			print_char(',');
			print_char(' ');
		}
	}
}
