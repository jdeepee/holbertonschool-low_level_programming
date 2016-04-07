#include <stdio.h>

char *cap_string(char *i){
	int a=0;
	char temp, prev;
	while(i[a] != '\0'){
		if (a == 0){
			prev=i[a];
			temp=i[a];
			if(temp > 96 && temp < 123){
				temp=temp-32;
				i[a]=temp;
			}
			a++; } else {
			temp=i[a];
			if (prev == ' ' || prev == '	' || prev == '\n'){
				if (temp > 96 && temp < 123){
					temp=temp-32;
					i[a]=temp;}
				prev=temp;
				a++;
			} else{
				a++;
				prev=temp;
			}}}
	return i;
}
