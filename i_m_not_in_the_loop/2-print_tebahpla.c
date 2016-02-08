#include "my_functions.h"

void print_tebahpla(void)
{
	int i;
    char letters[27] = {'z', 'y', 'x', 'w', 'v', 'u', 't', 's', 'r', 'q', 'p', 'o', 'n', 'm', 'l', 'k', 'j', 'i', 'h', 'g', 'f', 'e', 'd', 'c', 'b', 'a'};
	for (i=0; i < 27; i++)
		print_char(letters[i]);
}
