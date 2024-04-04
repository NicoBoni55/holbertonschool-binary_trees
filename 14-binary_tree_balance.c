#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree : pointer
 *
 * Return: height or 0 is tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left = binary_tree_height(tree->left) + 1;
		right = binary_tree_height(tree->right) + 1;

		if (left > right)
		{
			return (left);
		}
		else
		{
			return (right);
		}
	}
}
#include "binary_trees.h"
/**
 * binary_tree_balance - function that measures the balance of a binary tree
 * @tree : pointer
 *
 * Return: height or 0 is tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
	{
		return (0);
	}
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return (a - b);
}
