int print_char(char c);

void print_line(int n){
	int i=0;

	if (n <= 0){
		print_char('\n');
	} else{
		while(i<n){
			print_char('_');
			i++;
		}

		if (i == n){
			print_char('\n');
		}
	}
}
