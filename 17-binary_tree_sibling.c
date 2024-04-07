#include "binary_trees.h"
/**
 * binary_tree_sibling - Busca el broder
 * @node: nodo
 *
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *a;
	binary_tree_t *parent = NULL;
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
	sibling = parent->right;
	else
		sibling = parent->left;

	a = sibling;

	return (a);
}
