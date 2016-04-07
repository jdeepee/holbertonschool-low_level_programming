void reverse_array(int *a, int n){
	int c;
	int *left = &a[0];
	int *right = &a[n-1];
	for(; left<right ; left++, right--)
	{
		c = *left;
		*left = *right;
		*right = c;
	}
}
