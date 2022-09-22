#include "binary_trees.h"
/**
 * binary_tree_insert_right-inserts a node as the left-child of another node
 *
 * @parent: parent
 * @value: value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	new->right = parent->right;
	if (new->right)
	new->right->parent = new;
	parent->right = new;
	return (new);
}
