#include "binary_trees.h"

/**
 * binary_tree_size -  a function that measures the size of a binary tree.
 *
 * @tree: pointer to root node.
 * Return: size of binary tree if tree is NULL returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_tree;

	if (tree == NULL)
		return (0);

	size_tree = 1 + binary_tree_size(tree->right) + binary_tree_size(tree->left);

	return (size_tree);
}
