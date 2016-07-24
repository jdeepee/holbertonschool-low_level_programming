#include "tree.h"
#include <string.h>

BTree *find_tree_recursion(BTree *tree, char *str)
{
	int c;

	if (!tree){
		return NULL;
	}
	c = strcmp(str, tree->str);
	if (c == 0){
		return tree;
	}
	else if (c < 0){
		return find_tree_recursion(tree->left, str);
	}
	else{
		return find_tree_recursion(tree->right, str);
	}
}

BTree *btree_find(BTree *tree, char *str)
{
	if (!tree || !str)
		return NULL;
	return find_tree_recursion(tree, str);
}
