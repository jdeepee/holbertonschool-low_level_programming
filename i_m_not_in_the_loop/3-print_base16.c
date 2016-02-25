#include "my_functions.h"

void print_base16(void)
{
	int i, a;
	for (i=48; i<=57; i++)
		print_char(i);

	for (a=65; a<=70; a++)
		print_char(a);
}
