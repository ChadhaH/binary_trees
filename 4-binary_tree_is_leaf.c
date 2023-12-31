#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function
 * @node: pointer to a node
 * Return: 1 if node is leaf, else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
