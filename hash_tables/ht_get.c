#include "hashtable.h"
#include <stdlib.h>

unsigned int hash(const char *key, unsigned int size);

char *ht_get(HashTable *hashtable, const char *key)
{
  unsigned int h;
  h = hash(key, hashtable->size);
  
  if (hashtable->array[h] == NULL) {
    return NULL;
  }

  return (hashtable->array[h]->value); 
}
