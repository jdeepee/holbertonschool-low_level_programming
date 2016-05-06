#include "str_struct.h"
#include <stdlib.h>

char *string_copy(char *dest, const char *src){
	int i=0;
	
	while (*src != '\0'){
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return &(dest[-i]);
}

int len(char *s)
{
    int count=0;
    while(*s != '\0')
    {
        count++;
        s++;
    }
    return(count);
}

char *str_dup(char *s){
	char *d = malloc(len(s) + 1);
	if (d == NULL) {
		return NULL;
	}
	string_copy(d,s);                       
	return d;                          
}

struct String *string_to_struct(char *str){
	int length;
	length = 0;

	while(str[length] != '\0'){
		length++;
	}

	struct String *s;

	s = malloc(sizeof(struct String));

	s->str = str_dup(str);
	s->length = length;

	return (s);
}
