void array_iterator(int *array, int size, void (*action_func)(int)) {
	int count = 0;

	while (count<size){
		action_func(array[count]);
		count++;
	}
}
