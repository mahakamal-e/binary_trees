#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as
 * the right-child of another node.
 *
 * @parent: pointer to root.
 * @value: value to store in the node.
 * Return: pointer to new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{       
	binary_tree_t *n_node;
	
	if (parent == NULL)
		return (NULL);
	
	n_node = malloc(sizeof(binary_tree_t));
	
	if (n_node == NULL)
		return (NULL);
	n_node->parent = parent;
	n_node->n = value;
	n_node->left = NULL;
	n_node->right = NULL;

	if (parent->right)
	{
		n_node->right = parent->right;
		parent->right->right = n_node;
	}
	parent->right = n_node;
	return (n_node);
}
