#include "my_functions.h"

void print_combination_3(void)
{
	int i;
	int n;
	int x;

	for(i=0; i< 10; i++){
		for(n=0; n< 10; n++){
			for(x=0; x< 10; x++){
				if(n >= i){
					if(x >= n){
						if (i != n && n !=x && x != i){
							print_number(i);
							print_number(n);
							print_number(x);

							if (i == 7 && n == 8 && x == 9){
							} else {
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
