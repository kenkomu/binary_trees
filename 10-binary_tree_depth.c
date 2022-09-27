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
	size_t dleft, dright;

	if (tree == NULL)
		return (0);

    dleft = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
	dright = tree->right ? 1 + binary_tree_depth(tree->right) : 0;
	return (dleft > dright ? dleft : dright);
}
