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

