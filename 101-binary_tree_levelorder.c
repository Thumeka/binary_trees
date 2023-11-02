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
 * levels - prints the level in binary tree
 * @root: pointer
 * @level: to print
 * @func: used to print
 * Return: void
 */

void levels(const binary_tree_t *root, int level, void(*func)(int))
{
	if (root == NULL)
		return;
	if (level == 1)
		func(root->n);
	else if (level > 1)
	{
		levels(root->left, level - 1, func);
		levels(root->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - goes through binary using traversal
 * @tree: pointer
 * @func: function used
 * Return: void
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t high, l;

	if (!tree || !func)
		return;

	high = binary_tree_height(tree) + 1;
	for (l = 1; l <= high; l++)
		levels(tree, l, func);
}
