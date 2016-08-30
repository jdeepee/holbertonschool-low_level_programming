#include <stdlib.h>
#include "list.h"

void free_dl_list(List *list){
	List *temp;

	while(list){
		temp = list;
		list = list->next;
		free(temp->str);
		free(temp);
	}
}