#include <unistd.h>

int print_char(char c)  
{
	return (write(1, &c, 1));
}

void print_array_of_strings(char **a)  
{
	int i, x;
	i = 0, x = 0;

	while(a[i] != '\0') {
		while(a[i][x] != '\0'){
		  	print_char(a[i][x]);
		  	x++;
		}
		print_char(' ');  
			x = 0;    
			i++;
	}
	print_char('\n');  
}
