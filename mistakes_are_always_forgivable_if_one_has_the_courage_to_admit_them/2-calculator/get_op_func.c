int op_add(int, int);
int op_sub(int, int);
int op_mul(int, int);
int op_div(int, int);
int op_mod(int, int);

int (*get_op_func(char c))(int, int){
	if (c == '+'){
		return (&op_add);

	} else if (c == '-'){
		return (&op_sub);

	} else if (c == '*'){
		return (&op_mul);

	} else if (c == '/'){
		return (&op_div);

	} else if (c == '%'){
		return (&op_mod);

	} else {
		return 0;
	}

}
