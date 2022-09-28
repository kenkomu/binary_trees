#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: node
 *
 * Return: brother node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: node
 *
 * Return: node's uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	return (binary_tree_sibling(parent));
}
