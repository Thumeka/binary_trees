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

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to count the leaves
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer tree check
 * Return: 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int high, leave, expo, get;

	if (tree == NULL)
		return (0);

	high = binary_tree_height(tree);
	leave = binary_tree_leaves(tree);
	expo = high;
	get = 1;

	while (expo != 0)
	{
		get *= 2;
		expo--;
	}
	if (leave == get)
		return (1);
	else
		return (0);
}
