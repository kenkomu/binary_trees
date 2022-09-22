#include "binary_trees.h"
/**
 * binary_tree_insert_left-inserts a node as the left-child of another node
 *
 * @parent: parent
 * @value: value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new =  malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = new->right = NULL;
	return (new);
}
