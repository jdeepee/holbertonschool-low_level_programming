#include "tree.h"
#include <stdio.h>

int btree_depth_recursion(BTree *tree)
{
   if (tree == NULL){
       return 0;
   } else {
		/* compute the depth of each subtree */
		int left_depth = btree_depth_recursion(tree->left);
		int right_depth = btree_depth_recursion(tree->right);

		/* use the larger one */
		if (left_depth > right_depth) {
			return(left_depth+1);
		} else {
			return(right_depth+1);
		}
   }
}

int btree_depth(BTree *tree)
{
	int depth;
	BTree *tree;
	depth=0;

	if (tree == NULL){
		return -1;
	}
	return btree_depth_recursion(tree, depth);
}
