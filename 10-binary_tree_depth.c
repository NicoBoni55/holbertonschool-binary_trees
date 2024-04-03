#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree : pointer
 *
 * Return: depth or 0 is tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
	{
		return (0);
	}
	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
