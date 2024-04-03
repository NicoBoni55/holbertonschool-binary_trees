#include "binary_trees.h"
/**
 * binary_tree_delete - function that deletes an binary tree
 * @tree: pointer to root
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->right);
		binary_tree_delete(tree->left);
		free(tree);
	}
}
