#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: pointer
 * Return: pointer
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (!tree)
		return (NULL);

	tmp = tree->right;
	tree->right = tmp->left;

	if (tmp->left != NULL)
		tmp->left->parent = tree;
	tmp->parent = tree->parent;
	tmp->left = tree;
	tree->parent = tmp;
	return (tmp);
}
