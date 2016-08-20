#include "str_struct.h"
#include <stdlib.h>

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


struct String *string_to_struct(char *str){
	int length;
	length = 0;

	while(str[length] != '\0'){
		length++;
	}

	struct String *s;

	s = malloc(sizeof(struct String));

	s->str = string_dup(str);
	s->length = length;

	return (s);
}
