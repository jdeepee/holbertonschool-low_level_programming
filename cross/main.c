int print_char(char c);
int string_to_integer(char *s);
void print_row(int i, int len);

int main(int argc, char *argv[]){
	int h, w, i, len;

	if (argc < 2) {
		return (1);
	}
	if (argv[1] <= 0) {
		return (1);
	}
	len = string_to_integer(argv[1]);
	h = len;
	w = len;

	if (len == 1){
		print_char('X');
		print_char('\n');
	} else {
		for (i=0; i<=len; i++){
			print_row(i, len);
		}
	}
}

int string_to_integer(char *s){
	int count, total, c, nc, l;
	long on;
	count = 0;
	l = 1;
	on = 0;
	while (s[count] != '\0'){
		c = s[count]+0;
		nc = s[count+1]+0;
		if (s[count] == 45){
			l*=-1;
		} 
		if (c > 47 && c < 58){
			total = c - '0';
			on = on + total;
			if ( (on > 2147483647 && l == 1 ) || (on > 2147483648  && l == -1 )){
				return (0);
			} if( nc < 47 || nc > 58){
				break; //Not a number
			}
			on *= 10;
		}
		count+=1;
	}
	return(on*l);
}

void print_row(int i, int len)
{
	int c;
	c=0;
	int check, check2;
	for (; c<=len ; c++) {
		if (len % 2 != 0){
			check = 0;
			if (i == len/2 && c == len/2 && len % 2 != 0) {
				print_char('X');

			} else if (c == i && i != len/2 && i != 3) {
				print_char('\\');

			} else if (c == len-i && i != len/2 && i != 3) {
				print_char('/');

			} else if (i != len/2 && c != len/2 && check == 0){
				print_char(' ');
			} else {
				check = 1;
			}
			if (check == 1){
			} else if (c == len && check ==0){
				print_char('\n');
			}
		} else {
			check = 0;
			if (c == i && i != len/2) {
				print_char('\\');

			} else if (c == len-i && i != len/2) {
				print_char('/');

			} else if (i != len/2 && c != len/2){
				print_char(' ');
			} else {
				check = 1;
			}
			if (check == 1){
			} else if (c == len && check ==0){
				print_char('\n');
			}
		}
	}
}
