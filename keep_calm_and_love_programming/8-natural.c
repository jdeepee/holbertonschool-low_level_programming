#include <stdio.h>

int main(void)
{
	int a;
	int b;

	int x;
	int y;

	int c;
	int d;

	int v = 0;

	a=1024/3;
	b=1024/5;

	for(x=1; x<=a; x++)
	{
		y=x*3;

		if(y%3 == 0)
		{
			v = v+y;
		}
	}

	for(c=1; c<=b; c++)
	{
		d=c*5;

		if(d%5 == 0)
		{
			if(d%3 == 0)
			{}else{
				v = v+d;
			}
		}
	}

	printf("%d", v);
	printf("\n");
}
