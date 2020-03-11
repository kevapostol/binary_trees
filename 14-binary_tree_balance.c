#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 *
 * @tree: a pointer to a binary tree node
 *
 * Return: Returns 1 if true else its 0 - false
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side = 0, right_side = 0;

	if (tree == NULL)
		return (0);

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);


	if (tree->left != NULL)
		left_side += 1;
	if (tree->right != NULL)
		right_side += 1;

	return (left_side - right_side);

}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: a pointer to a binary tree node
 *
 * Return: Returns a number
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left) + 1;
	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right) + 1;

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}