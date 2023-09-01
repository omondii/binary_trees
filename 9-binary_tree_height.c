#include "binary_trees.h"
/**
 *binary_tree_height - a function that measures the height of a binary tree
 *@tree: a pointer to the root node of the tree to measure the height.
 *Return: tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);

	l = (tree->left) ? 1 + binary_tree_height(tree->left) : 0;
	r = (tree->right) ? 1 + binary_tree_height(tree->right) : 0;

	return ((l > r) ? l : r);
}
