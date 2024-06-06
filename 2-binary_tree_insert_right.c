#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *binary;

	if (parent == NULL)
		return (NULL);

	binary = binary_tree_node(parent, value);
	if (binary == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		binary->right = parent->right;
		parent->right->parent = binary;
	}
	parent->right = binary;

	return (binary);
}
