int print_char(char c);

void print_string(char *str){
	print_char(str[0]);
	while (*str != '\0'){
		str++;
		print_char(*str);
	}
}
