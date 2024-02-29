#include "binary_trees.h"
/**
 *binary_tree_is_root - checks if the given node is a root
 *@node: a pointer to the node
 *Return: return 1 if node is a root and 0 if otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);
	return (0);
}
