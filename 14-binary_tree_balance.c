#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 *
 * @tree: pointer to root node.
 * Return: balance factor of a binary tree otherwise,
 *         If tree is NULL, return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height, balance_factor;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	
	balance_factor = left_height - right_height;
	
	return (balance_factor);
}

/**
 * binary_tree_height - get the height ot binary tree.
 *
 * @tree: pointer to root node.
 * Return: if tree is NULL returns 0 otherwise return the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);

	return (r_height + 1);
}
