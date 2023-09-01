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

void print_at_level(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_at_level(tree->left, func, level - 1);
		print_at_level(tree->right, func, level - 1);
	}
}

/**
 *binary_tree_levelorder - goes through a binary tree using level-order traversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: a pointer to a function to call for each node
 *Return: If tree or func is NULL, do nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, level;

	if (tree == NULL || func == NULL)
		return;

	height = binary_tree_height(tree);
	for (level = 1; level <= height; level++)
	{
		print_at_level(tree, func, level);
	}
}
