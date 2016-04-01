#include <stdio.h>

char *uppercase_string(char *i){
	int a=0;
	char temp;

	while (i[a] != '\0'){
		temp=i[a];

		if (temp > 96 && temp < 123){
			temp=temp-32;
			i[a]=temp;
		}
		a++;
	}
	return i;
}
