#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: is a pointer to the node to measure the depth
 * Return: the depth, if tree is NULL, return 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t n;

	n = 0;
	if (!tree)
		return (0);
	while (tree->parent)
	{
		n++;
		tree = tree->parent;
	}
	return (n);
}
