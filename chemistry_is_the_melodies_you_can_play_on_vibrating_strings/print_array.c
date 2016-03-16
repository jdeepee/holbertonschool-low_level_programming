int print_char(char c);

void print_individual(int n)
{
  int n2 = n;
  char output_char;
  int numbers = 1;
  int n_next = n;
  int power = 1;
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
    }}

void print_number(int n)
{
  int n2 = n;
  if (n == 0)
  {
    print_char('0');
  }
  else if (n < 0)
  {
    n2 = n * -1;
    print_char('-');
    print_individual(n2);
  }
  else
  {
    print_individual(n2);
  }
}

void print_array(int *a, int n){
	int i=0;

	while (i<n){
		print_number(a[i]);
    if (i == n-1){
    } else { 
      print_char(',');
      print_char(' ');
    }
		i++;
	}
  print_char('\n');
}
