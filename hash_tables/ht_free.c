#include "hashtable.h"
#include <stdlib.h>

void ht_free(HashTable *hashtable)
{
  unsigned int i;
  List *list;
  List *temp;

  i = 0;
  for (;i < hashtable->size; i++) {
    list = hashtable->array[i];
    /* if element of array is empty, do nothing */
    if (list == NULL) {
    } else {
      while (list->next != NULL) {
      	/* goes through linked list and frees all parts */
      	free(list->key);
      	free(list->value);
      	temp = list;
        list = list->next;
        free(temp);
      }
    }
  }
  free(hashtable->array);
  free(hashtable);
  return;
}