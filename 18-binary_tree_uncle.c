#include "binary_trees.h"
/**
  * binary_tree_uncle -  finds the uncle of a node
  * @node: a pointer to the node to find the uncle
  * Return: If node is NULL, return NULL. If node has no uncle, return NULL
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (parent->parent->left == node->parent)
		return (parent->parent->right);
	return (parent->parent->left);
}
