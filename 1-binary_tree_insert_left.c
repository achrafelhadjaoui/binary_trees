#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *binary;

	if (parent == NULL)
		return (NULL);

	binary = binary_tree_node(parent, value);
	if (binary == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = binary;
	}
	parent->left = binary;

	return (binary);
}
