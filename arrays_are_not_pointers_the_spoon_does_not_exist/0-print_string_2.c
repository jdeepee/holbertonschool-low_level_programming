int print_char(char c);

void print_string_2(char *str){
	int len = 0;
	int p=0;
	while (str[len] != '\0'){
		len++;
	}

	while (p < len){
		if (p == 0){
			print_char(str[p]);
		}
		p++;
		p++;
		print_char(str[p]);
	}
}
