#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer tree check
 * Return: full tree 1 or NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int le, ri;

	if (tree == NULL)
		return (0);

	le = binary_tree_is_full(tree->left);
	ri = binary_tree_is_full(tree->right);

	if (le == ri)
		return (1);
	else
		return (0);
}
