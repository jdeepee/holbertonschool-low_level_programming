#include "tree.h"
#include <stdio.h>

int btree_depth_recursion(BTree *tree, int d)
{
	int l;
	int r;

	if (!tree->l && !tree->r){
		return d;
	}
	else if (!tree->r){
		return btree_depth_recursion(tree->l, ++d);
	}
	else if (!tree->l){
		return btree_depth_recursion(tree->r, ++d);
	}
	l = btree_depth_recursion(tree->l, d + 1);
	r = btree_depth_recursion(tree->r, d + 1);
	if (l >= r){
		return l;
	}
	return r;
}

int btree_depth(BTree *tree)
{
	int d = 0;

	if (!tree){
		return -1;
	}
	return btree_depth_recursion(tree, d);
}
