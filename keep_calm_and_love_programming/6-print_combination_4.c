#include "my_functions.h"

void print_combination_4(void)
{
	int a;
	int b;
	int c;
	int d;

	int x;
	int z;

	for(a=0; a<=9; a++)
	{
		for(b=0; b<=9; b++)
		{
			for(c=0; c<=9; c++)
			{
				for(d=0; d<=9; d++)
				{
					x=a*10;
					x=x+b;

					z=c*10;
					z=z+d;

					if(x != z)
					{
						if(z > x)
						{
							print_number(a);
							print_number(b);
							print_char(' ');
							print_number(c);
							print_number(d);

							if (z == 99 && x == 98)
							{} else {
								print_char(',');
								print_char(' ');
							}
						}
					}
				}
			}
		}
	}
}
