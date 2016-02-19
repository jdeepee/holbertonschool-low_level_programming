#include "my_functions.h"

int absolute(int n)
{
	int x;

	if (n < 0)
	{
		x=n*-1;
		return x;
	} else {
		return n;
	}
}
