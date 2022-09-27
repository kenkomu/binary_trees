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

	size_t leftDepth = binary_tree_depth(tree->left);
	size_t rightDepth = binary_tree_depth(tree->right);

	if (leftDepth > rightDepth)
		return (leftDepth + 1);
	else
		return (rightDepth + 1);
}
