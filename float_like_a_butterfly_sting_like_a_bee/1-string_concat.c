#include <stdlib.h>

int length(char *str){
	int length=0;
	while (*str != 0){
		length++;
		str++;
	}

	return length;
}

char *string_concat(char *s1, char *s2) {
	int total_length = length(s1) + length(s2);
	char *alloc = malloc(sizeof(char)*(total_length+1));
	char *alloc_copy = alloc;

	if (alloc == NULL){
		return NULL;
	}

	while (*s1 != 0){
		*alloc_copy = *s1;
		alloc_copy++;
		s1++;
	}

	while (*s2 != 0){
		*alloc_copy = *s2;
		alloc_copy++;
		s2++;
	}

	*alloc_copy = 0;
	return alloc;
}
