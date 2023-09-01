#include "binary_trees.h"
/**
  * binary_tree_leaves -  counts the leaves in a binary tree
  * @tree: pointer to the root node of the tree to count the no of leaves
  * Return: If tree is NULL, the function must return 0
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;
	size_t left_leaves, right_leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (left_leaves == 0 && right_leaves == 0)
		count++;

	return (count + left_leaves + right_leaves);
}
