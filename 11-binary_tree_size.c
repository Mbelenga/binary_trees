#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * If tree is NULL, the function must return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	leftsize = binary_tree_size(tree->left);
	rightsize = binary_tree_size(tree->right);

	return (leftsize + rightsize + 1);
}
