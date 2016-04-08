#include <stdio.h>
#include <stdlib.h>

int (*get_op_func(char c))(int, int);
int (*op_func) (int, int);

int main(int argc, char *argv[]) {

	if (argc != 4) {
		return 1; 
	}

	op_func = get_op_func(*argv[2]);

	if (op_func == 0){
		return 1;
	}

	int n;
	n = op_func(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", n);
	return 0;
}
