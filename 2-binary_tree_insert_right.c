#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: a pointer to a parent node
 * @value: a value to be added to the new node
 *
 * Return: returns a binary tree pointer
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (parent->right)
	{
		new->right = parent->right;
		new->right->parent = new;
		parent->right = new;
	}
	else
	{
		parent->right = new;
	}

	return (new);
}
