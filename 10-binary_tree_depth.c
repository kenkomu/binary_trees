#include "binary_trees.h"

/**
 * binary_tree_depth- measures the depth of a binary tree
 *
 * @tree: tree to measure
 *
 * Return: tree depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;

	return (depth);
}
