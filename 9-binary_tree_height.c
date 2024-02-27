#include "binary_trees.h"

/**
 * binary_tree_height - get the height ot binary tree.
 *
 * @tree: pointer to root node.
 * Return: if tree is NULL returns 0 otherwise return the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, l_height, height;

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
