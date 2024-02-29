#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds uncle of a node.
 *
 * @node: pointer to node.
 * Return: if node is null returns NULL or has no uncle.
 *         otherwise returns uncle of the node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *node_parent, *node_grandparent;

	if (!node || !node->parent)
		return (NULL);

	node_parent = node->parent;
	node_grandparent = node_parent->parent;

	if (node_grandparent == NULL)
		return (NULL);
	if(node_grandparent->left == node_parent)
		return (node_grandparent->right);
	return (node_grandparent->left);
}
