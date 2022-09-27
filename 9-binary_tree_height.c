#include "binary_trees.h"
/**
 * binary_tree_height-measures the height of a binary tree
 *
 * @tree: tree to be measured
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t lHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	size_t rHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lHeight > rHeight ? lHeight : rHeight);
}
