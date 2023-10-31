#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: is a pointer
 * Return: the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d_epth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		d_epth++;
		tree = tree->parent;
	}
	return (d_epth);
}
