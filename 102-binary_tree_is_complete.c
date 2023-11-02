#include "binary_trees.h"

/**
 * tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @root: count number of nodes
 * Return: node with child
 */

unsigned int tree_nodes(const binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + tree_nodes(root->left) + tree_nodes(root->right));
}

/**
 * complete - check if its complete
 * @tree: pointer
 * @index: node
 * @nodes: total
 * Return: complete
 */

int complete(const binary_tree_t *tree, int index, int nodes)
{
	if (!tree)
		return (1);
	if (index >= nodes)
		return (0);
	return (complete(tree->left, 2 * index + 1, nodes) &&
			complete(tree->right, 2 * index + 2, nodes));
}

/**
 * binary_tree_is_complete - complete
 * @tree: pointer
 * Return: true or false
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	unsigned int index = 0, new_node = tree_nodes(tree);

	if (!tree)
		return (0);
	else
		return (complete(tree, index, new_node));
}

