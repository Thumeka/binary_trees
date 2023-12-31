#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h, left_h;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
