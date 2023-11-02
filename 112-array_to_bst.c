#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer
 * @size: number of elements
 * Return: pointer to the root or NULL
 */

bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree;
	size_t k;

	if (!array || size == 0)
		return (NULL);
	tree = NULL;

	for (k = 0; k < size; k++)
		bst_insert(&tree, array[k]);

	return (tree);
}
