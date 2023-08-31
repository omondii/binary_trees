#include "binary_trees.h"
/**
  * binary_tree_is_full - checks if a binary tree is full
  * @tree: pointer to the root node of the tree to check
  * Return: If tree is NULL, your function must return 0
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_nodes = 0, right_nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_nodes = binary_tree_is_full(tree->left);
	right_nodes = binary_tree_is_full(tree->right);

	if (left_nodes && right_nodes)
		return (1);
	return (0);
}
