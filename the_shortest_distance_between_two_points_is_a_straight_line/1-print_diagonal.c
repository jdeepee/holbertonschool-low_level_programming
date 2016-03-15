int print_char(char c);

void print_diagonal(int n)
{
  int i=1;
  int x=1;

  if (n <= 0) {
    print_char('\n');
  }
  
  for (x=1; x <=n; x++) {
    for (i=1; i <= n; i++) {
      if (i == x) {
        print_char('\\');
      }
      if (i < x) {
        print_char(' ');
      }   
    }
    print_char('\n');
  }
}
