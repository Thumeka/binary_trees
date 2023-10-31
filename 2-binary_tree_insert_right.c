#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: insert right child
 * @value: store new node
 * Return: NULL or pointer on fail or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_r;

	if (parent == NULL)
		return (NULL);

	new_r = binary_tree_node(parent, value);
	if (new_r == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_r->right = parent->right;
		parent->right->parent = new_r;
	}
	parent->right = new_r;
	return (new_r);
}
