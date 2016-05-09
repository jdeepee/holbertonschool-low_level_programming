
#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int print_char(char);

void print_string(char *str) {
  while (*str != 0) {
    print_char(*str);
    str++;
  }
}

void print_list(List *list) {
  int x = 1;

  if (list == NULL) {
    print_char('\n');
    return; /* no node just return empty row */
  }

  do {
    if (!x) {
      print_char(',');
      print_char(' ');
    } else {
      x = 0;
    }
    print_string(list->str); /* print the string */
    list = list->next;
  } while (list != NULL);
  print_char('\n');
}
