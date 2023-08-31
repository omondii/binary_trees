#include "binary_trees.h"
/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the right-child in
 *@value: value to store in the new node
 *Return: Newly created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightchild;

	if (parent == NULL)
	{
		return (NULL);
	}

	rightchild = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		rightchild->right = parent->right;
		parent->right->parent = rightchild;
	}
	parent->right = rightchild;
	return (parent);
}
