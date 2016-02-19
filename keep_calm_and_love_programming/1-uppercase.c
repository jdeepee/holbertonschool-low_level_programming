#include "print_char.c"

char uppercase(char c)
{
    if ((c >= 97) && (c <= 122))
	{
		c = c - 32; 
		return c; 
	} 
	else {
		return c;
	}
}
