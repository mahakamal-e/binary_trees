#include "binary_trees.h"

/**
 * binary_tree_depth - a function that measures the depth of a node.
 * @tree: pointer to root node.
 * Return: depth of node otherwise if tree NULL returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;
	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		tree = tree->parent;
		tree_depth++;
	}
	return (tree_depth);
}

