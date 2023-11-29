#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: The height, if tree is NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (!tree)
		return (0);

	size_t lheight = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	size_t rheight = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	if (lheight > rheight)
		return (lheight);
	else
		return (rheight);
}
