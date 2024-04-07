#include "binary_trees.h"
/**
 * binary_tree_uncle - Busca el tioo
 * @node: nodo
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
	{
	binary_tree_t *a;
	binary_tree_t *parent = NULL;
	binary_tree_t *uncle = NULL;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	uncle = parent->parent;

	if (uncle->left == parent)
	uncle = parent->parent->right;
	else
	uncle = parent->parent->left;

	a = uncle;

	return (a);
}
