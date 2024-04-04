#include "binary_trees.h"
/**
 * binary_tree_leaves - Entry point
 * @tree: int
 *
 * Return: Always 0 (Success)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count = 0;

	while (tree != NULL)
	{
		if ((tree->left) == NULL && (tree->right) == NULL)
		{
			count++;
		}
	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);
	return (count);
	}
	return (0);
}
