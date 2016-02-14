#include "my_functions.h"

void print_combination_2(void)         
{
	for (int i = 0; i < 10; i++) { /* loop for first digit */
		for (int n = 0; n < 10; n++) { /* loop for second digit */
			if (n >= i ) {
				if (i != n) {
				print_number(i);
				print_number(n);
				
				if (i == 8 && n == 9) {
				} else {
				print_char(','); /* add comma and space but only if the number isn't 89 */
	  			print_char(' ');	
				}
	  			
	  		}
			}
		}
	}

}
