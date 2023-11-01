#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: is a pointer
 * Return: the depth
 */

unsigned int bi_depth(const binary_tree_t *tree)
{
	unsigned int d_epth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		d_epth++;
		tree = tree->parent;
	}
	return (d_epth);
}

/**
 * the_root - checks if the node are in the same binary
 * @f: first
 * @s: second
 * Return: 1 or 0
 */

int the_root(const binary_tree_t *f, const binary_tree_t *s)
{
	while (f->parent != NULL)
		f = f->parent;
	while (s->parent != NULL)
		s = s->parent;
	if (f == s)
		return (1);
	else
		return (0);
}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: first
 * @second: second
 * Return: lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	unsigned int s1, s2, common;

	if (!first || !second)
		return (NULL);
	if (the_root(first, second) == 0)
		return (NULL);

	s1 = bi_depth(first);
	s2 = bi_depth(second);

	if (s1 < s2)
	{
		for (common = s2 - s1; common != 0; common--)
			second = second->parent;
	}
	else
	{
		for (common = s1 - s2; common != 0; common--)
			first = first->parent;
	}
	while (first->n != second->n)
	{
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}
