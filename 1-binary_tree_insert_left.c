#include "binary_trees.h"
/**
 *binary_tree_insert_left - inserts a node as the left-child f another node
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *Return: pointer to the created node (leftnode)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftchild;

	if (parent == NULL)
	{
		return (NULL);
	}

	leftchild = binary_tree_node(parent, value);
	if (leftchild == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		leftchild->left = parent->left;
		parent->left->parent = leftchild;
	}
	else
	{
		parent->left = leftchild;
	}

	return (parent);
}
