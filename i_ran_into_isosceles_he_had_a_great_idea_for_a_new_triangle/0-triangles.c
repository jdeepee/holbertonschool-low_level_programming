#include <stdio.h>

void triangles_in_the_term(int h, int n) {
	if (n > 0 && h > 0) {
		int s, m, v, i;
		int t = 1;
		for (m = h; m > 1; m--){ 
				t = (t + 2); 
		}
		for (s = n; s > 0; s--){ 
			int c = 1;
			for (m = h; m > 0; m--){ 
				v = (t - c)/2; 
				for (i = v; i > 0; i--) {
					printf(" "); 
				}
				for (i = c; i > 0; i--) {
					printf("*"); 
				}
				c = (c + 2);
				printf("\n");
			}
		}
	}
}
