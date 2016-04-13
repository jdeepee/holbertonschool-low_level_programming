#include <stdlib.h>

int total_length(char *str)
{
	int total = 0; 
	while (*str != 0) {
		total++;
    	str++;
  	}
  	return total; /* return length of string */
}

char *string_nconcat(char *s1, char *s2, int n) {
  	int length = total_length(s1) + total_length(s2);
  	int i = 0;

  	char *alloc = malloc(sizeof(char)*(length+1));
  	char *alloc_copy = alloc;

  	if (alloc == NULL){
  		return NULL;
  	}

  	while (*s1 != 0) {
    	*alloc_copy = *s1;
    	alloc_copy++;
    	s1++;
  	}
  	while (*s2 != 0 && i < n) {
    	*alloc_copy = *s2;
    	alloc_copy++;
    	s2++;
    	i++;
  	}

  	*alloc_copy = 0;
  	return alloc;
}
