#include "tree.h"
#include <string.h>

BTree *find_tree_recursion(BTree *tree, char *str)
{
	int compare;
	compare = strcmp(str, tree->str);

	if (compare < 0){
		return find_tree_recursion(tree->left, str);
	} 
	if (compare > 0){
		return find_tree_recursion(tree->right, str);
	}

	if (compare == 0){
		return tree;
	}
}

BTree *btree_find(BTree *tree, char *str)
{
	if (tree == NULL || str == NULL){
		return NULL;
	}
	return find_tree_recursion(tree, str);
}
