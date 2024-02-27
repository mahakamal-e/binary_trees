#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree.
 *
 * @tree: pointer to root node.
 * Return: If tree is NULL, the function must return 0,
 * otherwise returns number of leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t number_of_leaves, left_leaves, right_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_size(tree->left);
	right_leaves = binary_tree_size(tree->right);

	number_of_leaves = left_leaves + right_leaves;

	return (number_of_leaves);
}
