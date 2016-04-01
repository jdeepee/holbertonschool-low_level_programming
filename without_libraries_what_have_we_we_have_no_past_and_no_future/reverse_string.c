void reverse_string(char *s){
	char c;
	int length=0;
	int loop=0;
	char *left; = &s[0];
	char *right = &s[length-1];

	while (s[loop] != '\0'){
		length++;
		loop++;
	}

	for(; left<right ; left++, right--)
	{
		c = *left;
		*left = *right;
		*right = c;
	}
}
