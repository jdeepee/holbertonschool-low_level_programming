#include "tree.h"
#include <string.h>
#include <stdlib.h>

int set_node(BTree **tree, char *data)
{
	BTree *new;

	new = malloc(sizeof(BTree))
	if (!new)
		return 1;
	new->str = strdup(data)
	if (!new->str)
		return 1;
	new->left = NULL;
	new->right = NULL;
	*tree = new;
	return 0;
}

int tree_recursion(BTree *tree, char *data)
{
	if (strcmp(data, tree->str) < 0)
	{
		if (!tree->left)
			return set_node(&(tree->left), data);
		else
			return tree_recursion(tree->left, data);
	}
	else
	{
		if (!tree->right)
			return set_node(&(tree->right), data);
		else
			return tree_recursion(tree->right, data);
	}
}

int btree_insert(BTree **tree, char *data)
{
	if (!tree || !data){
		return 1;
	}
	if (!*tree){
		return set_node(tree, data);
	}
	return tree_recursion(*tree, data);
}
