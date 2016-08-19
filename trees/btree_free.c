#include "tree.h"
#include <stdlib.h>

void btree_free(BTree *tree)
{
	if (tree == NULL){
		return;
	}
	btree_free(tree->left);
	btree_free(tree->right);

	if (tree->str != NULL){
		free(tree->str);
	}
	
	free(tree);
}