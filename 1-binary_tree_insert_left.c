#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent : parent
 * @value : value
 *
 * Return: return a pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;
	binary_tree_t *aux;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	if (newnode != NULL && parent != NULL)
	{
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = NULL;
	newnode->left = NULL;
	aux = parent->left;
	newnode->left = aux;
		if (aux)
			aux->parent = newnode;
	parent->left = newnode;
	}
	return (newnode);
}
