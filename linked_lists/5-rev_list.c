#include "list.h"
#include <stdlib.h>

void rev_list(List **list){
  List *low = *list;
  List *next;
  List *main;

  next = low->next; /* store */
  low->next = NULL;
 
  while (next != NULL) { /* add to next */
    main = next;
    next = main->next;
    main->next = low;
    low = main;
  }
  *list = low; 

}
