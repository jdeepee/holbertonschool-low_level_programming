#include "tree.h"
#include <stdlib.h>

void btree_free(BTree *tree)
{
	if (!tree){
		return;
	}
	if (tree->str){
		free(tree->str);
	}
	btree_free(tree->left);
	btree_free(tree->right);
	free(tree);
}