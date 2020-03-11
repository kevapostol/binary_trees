#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child
 * of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the new node or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));

	if (parent == NULL || new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;

	if (parent->left)
	{
		new->left = parent->left;
		new->left->parent = new;
		parent->left = new;
	}
	else
		parent->left = new;

	return (new);
}
