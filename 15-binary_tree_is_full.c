#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 *
 * @tree: is a pointer to the root node of the tree to check.
 *
 * Return: if tree is NULL or not full return 0
 *				 othewise return 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
	{
		return (1);
	}

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
