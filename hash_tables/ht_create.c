#include "hashtable.h"
#include <stdlib.h>

HashTable *ht_create(unsigned int size)
{
  unsigned int i;
  HashTable *new_ht;
  
  new_ht = malloc(sizeof(HashTable));
  /* Allocation space for array */
  new_ht->array = malloc(sizeof(List *) * size);
  new_ht->size = size;

  if (new_ht == NULL) {
    return NULL;
  }
  if (new_ht->array == NULL) {
    return NULL;
  }

  i = 0;
  while (i < size) {
    new_ht->array[i] = NULL;
    i++;
  }
  
  return new_ht;
}
