void insertion_sort(int *array, int size){
	int i;
	int x;
	int temp;

	for(i=1; i<size; i++){
		temp = array[i];
		x = i - 1;

		while((temp<array[x]) && (x >= 0)){
			array[x+1] = array[x];
			x = x - 1;
		}
		array[x+1] = temp;
	}
}
