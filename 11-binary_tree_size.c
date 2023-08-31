#include "binary_trees.h"
/**
 *binary_tree_size - find size of binary tree
  * @tree: pointer of the node to be counted
  * Return: size of tree
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	return (left_size + right_size + 1);

}
