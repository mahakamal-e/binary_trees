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
