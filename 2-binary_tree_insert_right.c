#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert the right child
 * @parent: pointer to the node to insert to the right child
 * @value: value to store in the new node
 * Return: pointer to the right child || NULL or failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightchild;

	if (parent == NULL)
		return (NULL);

	rightchild = malloc(sizeof(binary_tree_t));

	if (rightchild == NULL)
		return (NULL);

	rightchild->parent = parent;
	rightchild->n = value;
	rightchild->left = NULL;
	rightchild->right = parent->right;

	parent->right = rightchild;

	if (rightchild->right)
	{
		rightchild->right->parent = rightchild;
	}
	return (rightchild);
}
