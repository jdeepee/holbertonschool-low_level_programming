#include <stdio.h>

char *nconcat_strings(char *dest, const char *src, int n){
	int a=0;
	int i=0;

	while(*dest){
		dest++;
		a++;
	}

	while(*src){
		if(i<n){
			*dest=*src;
			dest++;
			a++;
		}
		i++;
		src++;
	}
	*dest = '\0';
	return &(dest[-a]);
}
