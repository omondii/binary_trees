#include "binary_trees.h"
/**
 *binary_tree_height - Calculate the height of a inary tree
 *@tree: pointer to root of binary tree
 *Return: longest height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right)
			: 0;
	}
	return ((l > r) ? l : r);
}
/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *Return: If tree is NULL, return 0If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}
