#include "binary_trees.h"
/**
 * tree_is_perfect - checks if a tree is perfect or not
 * @tree: pointer to tree to check
 * Return: 0 if is not a perfect else any no.
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + tree_is_perfect(tree->left);
		r = 1 + tree_is_perfect(tree->right);
		if (r == 1 && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	return (0);
}
/**
 * binary_tree_is_perfect - check if binary tree is perfect
 * @tree: pointer to the tree to check
 * Return: 1 is it else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
		return (0);
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
			return (1);
		return (0);
	}
}
