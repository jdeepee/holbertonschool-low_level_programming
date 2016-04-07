int print_char(char c);

void print_individual(int n, int z, int x)
{
  int n2 = n; char output_char; int numbers = 1; int n_next = n; int power = 1;
  for (; n2 != 0; numbers++)
    {
      n2 = n2/10;
      power = power*10;
    }
  n2 = n;
  numbers--;
  power = power / 10;
  for (; numbers > 0; numbers--)
    {
      n2 = n_next/power;
      output_char = n2+'0';
      print_char(output_char);
      n_next = n_next%power;
      power = power/10;
      if (power == 0) {
      	if (x == z){
      	} else {
      		print_char(',');
      		print_char(' ');
      	}
}}}


void print_array(int *a, int n){
	int x=0;
	int v;
	int n2=n-1;
	while(x<=n2){
		v=a[x];
		if (v == 0) {
    		print_char('0');
  		}
		else if (v < 0) {
			v = v * -1;
			print_char('-');
			print_individual(v, n2, x);
		}
		else {
			print_individual(v, n2, x);
		}
		x++;
	}
	print_char('\n');
}
