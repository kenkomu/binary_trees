#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: tree to be checked
 * Return: int
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (full(tree->left) && full(tree->right));
}
