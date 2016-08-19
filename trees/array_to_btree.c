#include "tree.h"
#include <string.h>
#include <stdlib.h>

int insert_tree(BTree *temp, BTree *node){
	if (strcmp(node->str, temp->str) < 0){
		if (temp->left != NULL){
			temp = temp->left;
			insert_tree(temp, node);
		} else {
			temp->left = node;
		}
	} else {
		if (temp->right != NULL){
			temp = temp->right;
			insert_tree(temp, node);
		} else {
			temp->right = node;
		}
	}
	return 0;
}

int btree_insert(BTree **tree, char *data)
{
	BTree *node;

	node = malloc(sizeof(BTree));
	node->str = strdup(data);
	node->right = NULL
	node->left = NULL

	if (node->str == NULL || node == NULL){
		return 1;
	}

	/*Checking to see if a binary tree exsists */
	if (*tree == NULL){
		*tree = node;
	} else {
		BTree *temp;
		temp = *tree;
		insert_tree(temp, node);
	}
	return 0;
}


BTree *array_to_btree(char **array)
{
	BTree *tree;
	int i, value;

	tree = NULL;
	for (i = 0; array[i] != NULL; i++){
		value = btree_insert(&tree, array[i]);

		if (value == 1){
			return 1;
		}
	}

	return tree;
}