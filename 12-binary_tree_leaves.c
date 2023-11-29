#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count the n of leaves
 *
 * Return: count of leaves, If tree is NULL, the function must return 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaves, r_leaves;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	r_leaves = binary_tree_leaves(tree->right) + 0;
	l_leaves = binary_tree_leaves(tree->left) + 0;

	return (l_leaves + r_leaves);
}
