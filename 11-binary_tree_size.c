#include "binary_trees.h"
/**
 * binary_tree_size-size of the tree
 *
 * @tree: tree to be measured
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = tree->parent ? binary_tree_depth(tree->left) + 1 +
		binary_tree_depth(tree->right) : 0;
}
