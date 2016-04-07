int my_function(int n, int number){
	if ((float)n/number == number){
		return (number);
	} else {
		if (n <= number){
			return (-1);
		} else {
			return (my_function(n, number+1));
		}	
	}
}

int square_root(int n){
	int number=0;
	n = my_function(n, number);
	return (n);
}
