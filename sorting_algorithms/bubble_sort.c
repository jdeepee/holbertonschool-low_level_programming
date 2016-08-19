void bubble_sort(int *array, int size){
	int x;
	int y;
	int temp;

	for(x=0; x<size; x++){
		for(y=0; y<size-1; y++){
			if (array[y]>array[y+1]){
				temp = array[y+1];
				array[y+1] = array[y];
				array[y] = temp;
			}
		}
	}
}
