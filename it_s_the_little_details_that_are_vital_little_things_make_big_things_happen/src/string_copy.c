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
