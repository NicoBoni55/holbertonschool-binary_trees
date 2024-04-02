#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node
 * @value: value
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	while (newnode != NULL)
	{
	newnode->n = value;
	newnode->parent = ::parent;

	return (newnode);
	}
	return (NULL);
}
