#include "binary_trees.h"

/**
 * binary_tree_uncle - find the uncle of the node
 * @node: node to find the uncle
 * Return: pointer or NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *aunt;

	if (node == NULL)
		return (NULL);

	parent = node->parent;
	if (parent == NULL)
		return (NULL);

	aunt = parent->parent;
	if (aunt == NULL)
		return (NULL);

	if (aunt->right == parent)
		return (aunt->left);
	else
		return (aunt->right);
}
