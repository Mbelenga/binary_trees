#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts the left child
 *
 *
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
{
	binary_tree_t *leftchild;

	if (parent == NULL)
		return (NULL);

	leftchild = malloc(sizeof(binary_tree_t));

	if (leftchild == NULL)
		return (NULL);

	leftchild->parent = parent;
	leftchild->n = value;
	leftchild->left = parent->left;
	leftchild->right = NULL;
	parent->left = leftchild;

	/*set the left child as the new left child if it was already there*/
	if (leftchild->left)
	{
		leftchild->left->parent = leftchild;
	}
	return (leftchild);
}
