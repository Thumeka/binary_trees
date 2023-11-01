#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer
 * Return: pointer
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp;

	if (!tree)
		return (NULL);

	tmp = tree->left;
	tree->left = tmp->right;

	if (tmp->right != NULL)
		tmp->right->parent = tree;
	tmp->parent = tree->parent;
	tmp->right = tree;
	tree->parent = tmp;
	return (tmp);
}
