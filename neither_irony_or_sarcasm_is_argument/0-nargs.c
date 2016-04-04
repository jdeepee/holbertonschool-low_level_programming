#include <stdio.h>

int main(int argc, char *argv[]) {
	if (*argv) { 
		int n = argc-1;

		printf("%d\n", n);
	}
}
