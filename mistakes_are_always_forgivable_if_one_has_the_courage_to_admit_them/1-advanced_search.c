int advanced_search(int *array, int size, int (*check_func)(int)){
	int count;
	count = 0;

	while (count<size){
		if (check_func(array[count])==1) { 
			return(1); /* match found */
		}
		count++;
	}
	return -1; /* No matches*/
}
