#include "hashtable.h"
#include <stdlib.h>

int add_node(List **, const char*, const char *);
unsigned int hash(const char *key, unsigned int size);

char *string_dup(char *str) {
  char *copystr = str;
  int strln = 0;
  while (*copystr != 0) {
    copystr++;
    strln++; /* Getting the length */
  }
  char *ret;
  char *retc;
  ret = malloc(sizeof(char) * (strln+1));

  if (ret == NULL) return ret; /* Failed to allocate the memory. */

  retc = ret;
  copystr = str;
  while (*copystr != 0) {
    *retc = *copystr;
    retc++;
    copystr++;
  }
  *retc=0;
  
  return ret; /* return 'holberton' (*str ) */
}

int ht_put(HashTable *hashtable, const char *key, const char *value)
{
  unsigned int h;
  h = hash(key, hashtable->size);

  if ( (add_node(&hashtable->array[h], key, value) ) == 1) {
      return (1);
  }

  return (0);
}

int add_node(List **list, const char *key, const char *value)
{
  List *l;
  l = malloc(sizeof(List));

  if (l == NULL) {
    return (1);
  }

  if ( (l->key = string_dup(key)) == NULL) {
    return (1);
  }
  if ( (l->value = string_dup(value)) == NULL) {
    return (1);
  }
  
  l->next = *list;
  /* now list pointer points to new node */
  *list = l;

  return (0);
}
