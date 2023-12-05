#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: is a pointer to the node to find the sibling
 *
 * Return: the sibling of a node
 *         return NULL If node is NULL, the parent is NULL
 *          or If node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left && node->parent->right)
		return (node->parent->right);

	if (node == node->parent->right && node->parent->left)
		return (node->parent->left);

	return (NULL);
}
