#include "binary_trees.h"
/**
 *max - calculate the maximum of 2 ints
 *@a: Fisrt number
 *@b: Second number
 *Return: larger number
 */
int max(int a, int b)
{
	return (a > b) ? a : b;
}

/**
 *binary_tree_height - Calculate the height of a inary tree
 *@tree: pointer to root of binary tree
 *Return: height of tree
 */
int binary_tree_height(const struct binary_tree_t* tree)
{
	if (tree == NULL)
		return (-1);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);
	return (1 + max(left_height, right_height));
}

/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: a pointer to the root node of the tree to measure the balance factor
 *Return: If tree is NULL, return 0If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->left);

	return (left_height - right_height);
}
