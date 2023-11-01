#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to measure root node
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_factor(tree->left) - binary_tree_factor(tree->right));
}


/**
 * binary_tree_factor - measures the height of a binary tree
 * @node: is a pointer
 * Return: the height
 */

int binary_tree_factor(const binary_tree_t *node)
{
	int right_h, left_h;

	if (node == NULL)
		return (-1);

	left_h = binary_tree_factor(node->left);
	right_h = binary_tree_factor(node->right);

	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
