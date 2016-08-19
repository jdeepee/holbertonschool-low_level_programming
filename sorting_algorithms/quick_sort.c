void quicksort(int *array, int left, int right);

void quick_sort(int *array, int size){
  quicksort(array, 0, size-1);
}

void quicksort(int *array, int left, int right){
  int pivot, a, b, temp;
  if (left < right) {
    pivot = left; // select a pivot element
    a = left;
    b = right;
    while(a < b) {
      /* Increase a until I get a number greater than the pivot */
      for(; array[a] <= array[pivot] && a <= right; a++);
      /* Reduce B until I get a number less than pivot */
   	  for(; array[b] > array[pivot] && b >= left; b--);

      if(a < b) {
        temp = array[a];
        array[a] = array[b];
        array[b] = temp;
      }
    }

    /* Swap pivot with element in b's position */
    temp = array[b];
    array[b] = array[pivot];
    array[pivot] = temp;
    /* Repeating for elements to the left and right of the pivot */
    quicksort(array, left, b-1);
    quicksort(array, b+1, right);
  }
}
