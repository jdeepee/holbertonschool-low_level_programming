#include <stdlib.h>

int check(char i) {
  if ((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z')) {
    return 1;
  } 
  else if (i >= '0' && i <= '9') {
    return 1;
  }
  return 0;
}

int str_length(char *s, int a) {
  int i;

  i = 0;
  while(check(s[a])) {
    i++;
    a++;
  }
  return i;
}

void store_string(char *a, char *s, int b) {
  int i;

  i = 0;

  while (check(s[b])) {
    a[i] = s[b];
    i++;
    b++;
  }
  a[i] = '\0';
  return;
}

int str_amount(char *s) {
  int i;
  int len;

  i = 0;
  len = 0;
  while (s[i] != '\0') {
    if (check(s[i]) && (i == 0 || !check(s[i - 1]))){
      len++;
    }
    i++;
  }
  return len;
}

char **string_to_words(char *s) {
  char **array;
  int a, i, l, amount_of_str;

  a = 0;
  i = 0;
  amount_of_str = str_amount(s);
  if (amount_of_str == 0){
    return NULL;
  }
  array = malloc(sizeof(char *) * (amount_of_str + 1));

  while (s[a] != '\0') {
    if (check(s[a]) && (a == 0 || !check(s[a - 1]))) {
      l = str_length(s, a);
      array[i] = malloc(sizeof(char) * (l + 1)); 
      store_string(array[i], s, a);
      i++;
    }
    a++;
  }
  array[amount_of_str] = NULL;
  return array;
}
