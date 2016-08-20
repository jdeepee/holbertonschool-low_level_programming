#include "printf_headers.h"

int print_number(long int n){
  int total;
  long int i, i2, temp, mod;
  i = 1;
  mod = 1;
  temp = n;
  total =0;
  if (n < 0){
    mod = -1;
    total += print_char('-');
  }
  while(temp > 9 || temp < -9){
    i++;
    temp = temp / 10;
  }
  while(i){
    temp = n;
    i2 = i--;

    while (i2-- > 1){
      temp /= 10;
    }
    total += print_char(((temp % 10) * mod + '0'));
  }
  return total;
}
