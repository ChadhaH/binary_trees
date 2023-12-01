#include "binary_trees.h"

/**
 * binary_tree_balance - function
 *
 * @tree: A pointer to the root
 *
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - function
 *
 * @tree: A pointer to the root
 *
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t lefty = 0, righ = 0;

		lefty = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		righ = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((lefty > righ) ? lefty : righ);
	}

	return (0);
}
