#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: if node is NULL, 0
 * If node is a leaf, 1 otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node || node->left || node->right)
		return (1);
	return (0);
}
