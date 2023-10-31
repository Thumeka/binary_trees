#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer
 * Return: the size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t tree_s = 0;

	if (tree)
	{
		tree_s += 1;
		tree_s += binary_tree_size(tree->left);
		tree_s += binary_tree_size(tree->right);
		return (tree_s);
	}
	return (0);
}
