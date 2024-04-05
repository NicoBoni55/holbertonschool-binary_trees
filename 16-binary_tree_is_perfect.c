#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree : tree
 *
 * Return: 1 if is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int a, b;

	if (!tree)
		return (0);

	a = binary_tree_height(tree) + 1;
	b = (int)binary_tree_size(tree);

	if ((1 << (a)) - 1 == b)
		return (1);

	return (0);
}

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

	if (!tree || (!tree->left && !tree->right))
	{
		return (0);
	}
	else
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);

		if (left > right)
		{
			return (left + 1);
		}
		else
		{
			return (right + 1);
		}
	}
}
#include "binary_trees.h"
/**
 * binary_tree_size - Entry point
 * @tree: arbol
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
	{
		return (0);
	}


		a = binary_tree_size(tree->left);
		b = binary_tree_size(tree->right);

		return (a + b + 1);
}
