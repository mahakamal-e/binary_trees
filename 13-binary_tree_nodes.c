#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child.
 *
 * @tree: pointer to root node.
 *
 * Return: number of nodes have child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		count +=1;

	return (count);
}
