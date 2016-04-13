#include <stdlib.h>

int **alloc_grid(int width, int height) {
  	int **grid_alloc = malloc(sizeof(int *) * height);
  	int i = 0;

  	if (grid_alloc == NULL) {
  		return NULL; /* failed to assign the memory */
  	}
  
  	for ( ; i<width ; i++) {
    	grid_alloc[i] = malloc(sizeof(int) * width);

    	if (grid_alloc[i] == NULL){
    		return NULL; /* failed to assign the memory */
    	}
  	}
  	return grid_alloc;
}
