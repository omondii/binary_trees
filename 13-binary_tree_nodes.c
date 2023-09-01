#include "binary_trees.h"
/**
  * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
  * @tree: pointer to the root node of the tree to count the no of nodes
  * Return: count of nodes with at least i child
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left || tree->right)
		count++;
	return (left_nodes + right_nodes + count);
}
