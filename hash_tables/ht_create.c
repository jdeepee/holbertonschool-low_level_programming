#include "hashtable.h"
#include <stdlib.h>
#include <stdio.h>

HashTable *ht_create(unsigned int size)
{
  HashTable *ht;
  unsigned int i;
  
  ht = NULL;
  ht = malloc(sizeof(HashTable));

  if (ht == NULL) {
    return NULL;
  }

  ht->array = malloc(sizeof(List *) * size);
  if (ht->array == NULL) {
    return NULL;
  }

  for (i = 0; i < size; i++) {
    ht->array[i] = NULL;
  }
  
  ht->size = size;
  
  return ht;
}
