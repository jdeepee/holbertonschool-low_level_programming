int factorial(int n){
	int dup=n;

	if (dup < 0){
		return -1;
	}

	if(n <= 1) {
		return 1;
	}
	return n * factorial(n - 1);
}
