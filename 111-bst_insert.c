#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value:value to store in the node to be inserted
 * Return: pointer to the created node, NULL on failure.
 * If the address stored in tree is NULL,created node becomes root node.
 * If the value is already present in the tree, it must be ignored
 **/

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *now;

	if (!*tree)
	{
		new_node = binary_tree_node(NULL, value);
		*tree = new_node;
		return (*tree);
	}
	now = *tree;

	if (value < now->n)
	{
		if (!now->left)
		{
			new_node = binary_tree_node(now, value);
			now->left = new_node;
			return (now->left);
		}
		return (bst_insert(&now->left, value));
	}
	else if (value > now->n)
	{
		if (!now->right)
		{
			new_node = binary_tree_node(now, value);
			now->right = new_node;
			return (now->right);
		}
		return (bst_insert(&now->right, value));
	}
	return (NULL);
}
