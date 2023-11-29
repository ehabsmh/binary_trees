#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to count the n of nodes
 *
 * Return: count of nodes of 1 child, If tree is NULL, the func must return 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_nodes, r_nodes;

	if (!tree)
		return (0);

	if ((!tree->left && tree->right) || (tree->left && !tree->right))
		return (1);

	r_nodes = binary_tree_nodes(tree->right) + 0;
	l_nodes = binary_tree_nodes(tree->left) + 0;

	return (l_nodes + r_nodes);
}
