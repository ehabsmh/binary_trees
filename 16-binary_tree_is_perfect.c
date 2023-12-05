#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
  int l_level, r_level;

  if (!tree)
    return (0);

  l_level = binary_tree_height(tree->left);
  r_level = binary_tree_height(tree->right);

  if (tree->left && tree->right && l_level == r_level)
  {
    return binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right);
  }

  if (!tree->left && !tree->right)
    return (1);

  return (0);
}

size_t binary_tree_height(const binary_tree_t *tree)
{
  size_t l_height, r_height;

  if (!tree)
    return (0);

  l_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
  r_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

  if (l_height > r_height)
    return l_height;
  else
    return r_height;
}
