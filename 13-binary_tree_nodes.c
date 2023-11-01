#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: count number of nodes
 * Return: node with child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n_odes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			n_odes += 1;
		n_odes += binary_tree_nodes(tree->left);
		n_odes += binary_tree_nodes(tree->right);
	}
	return (n_odes);
}
