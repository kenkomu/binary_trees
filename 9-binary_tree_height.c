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
	else
	{
		int left_height = binary_tree_height(tree->left);
		int right_height = binary_tree_height(tree->right);

		if (left_height >= right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
	}
}
