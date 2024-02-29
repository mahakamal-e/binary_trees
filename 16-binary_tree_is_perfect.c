#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if binary tree is perfect.
 *                          called perfect when all
 *                          its levels are completely filled
 * @tree: pointer to root node.
 * Return: 0 if tree is NULL otherwise returns 1.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height != right_height)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
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

/**
 * binary_tree_height - get the height ot binary tree.
 *
 * @tree: pointer to root node.
 * Return: if tree is NULL returns 0 otherwise return the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height, height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
	{
		height = l_height + 1;
	}
	else
	{
		height = r_height + 1;
	}

	return (height);
}
