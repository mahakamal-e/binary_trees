#include "binary_trees.h"
/**
 * binary_tree_sibling - a function that finds the sibling of a node.
 *
 * @node: pointer to node.
 * Return: if node is NULL or parent is NULL returns NULL
 *         NODE HAS NO SIBLING RETURN NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
