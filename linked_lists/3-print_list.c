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
  /*Checking to see if list is NULL if NULL, just print a empty line */
  if (list == NULL){
    print_char('\n');
  }

  List *temp;
  temp = list;
  /* While there is still a next node in the list */
  while(temp->next != NULL){
    /*Print the string of the current node */
    print_string(temp->str);
    print_char(',');
    print_char(' ');
    /*Assign temp to the next node in the list */
    temp = temp->next;
  }

  /* Checking to see if it is the last node */
  if(temp->next == NULL){
    /* Printing string of last node */
    print_string(temp->str);
    print_char('\n');
  }
}


