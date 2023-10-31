#include "binary_trees.h"

/**
 * binary_tree_delete -  deletes an entire binary tree
 * @tree: node to be deleted
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	tree = NULL;
}
