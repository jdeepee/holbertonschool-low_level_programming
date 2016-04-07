int find_prime(int n, int count) {
	if (n <= 1) {
		return 0;
	}

  	else if (count > n/2) {
  		return 1;
  	}

  	else if (n % count == 0) {
  		return 0;
  	}

  	else {
		return find_prime(n, count+1);
	}
}

int is_prime_number(int n)
{
  n = find_prime(n, 2);
  return (n);
}
