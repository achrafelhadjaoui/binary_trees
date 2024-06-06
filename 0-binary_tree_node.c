#include "binary_trees.h"

/**
 * binary_tree_node - a function that create a binary tree node
 * @parent: pointer to the parent node to be created
 * @value: is the value to put the new node
 *
 * Return: pointer to new node, or NULL on fialure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary;

	binary = malloc(sizeof(binary_tree_t));
	if (!binary)
		return (NULL);

	binary->n = value;
	binary->parent = parent;
	binary->left = NULL;
	binary->right = NULL;

	return (binary);
}
