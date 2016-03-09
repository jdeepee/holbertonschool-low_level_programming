int print_char(char c);

void print_string_half(char *str){
	int len=0;
	int len2=0;
	while (str[len] != '\0'){
		len++;
		len2++;
	}

	if ((len+1)%2 == 0){
		len=len/2;
	} else if ((len+1)%2 != 0){
		len=(len-1)/2;
	}
	int p=len+1;

	while(p <= len2){
		print_char(str[p]);
		p++;
	}
}
