void reverse_string(char *s){
	char c;
	int length=0;
	int loop=0;

	while (s[loop] != '\0'){
		length++;
		loop++;
	}

	char *left;
	*left = &s[0];
	char *right;
	*right = &s[length-1];
	for(; left<right ; left++, right--)
	{
		c = *left;
		*left = *right;
		*right = c;
	}
}
