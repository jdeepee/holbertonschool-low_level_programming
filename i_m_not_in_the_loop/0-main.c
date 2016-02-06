#include <unistd.h>

int print_char(char z)
{
  return (write(1, &z, 1));
}
