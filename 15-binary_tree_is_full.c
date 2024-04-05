#include "binary_trees.h"
/**
 * binary_tree_is_full - Entry point
 * @tree: arbol
 *
 * Return: Always 0 (Success)
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->right == NULL)
	{
		binary_tree_is_full(tree->left);
	}
	else if (tree->left == NULL && tree->right != NULL)
	{
		binary_tree_is_full(tree->right);
		return (0);
	}
	return (1);

}
