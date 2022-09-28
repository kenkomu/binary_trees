#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: tree to be measured
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (tree == NULL)
		return (0);

	lHeight = tree->left ? (int) binary_tree_height(tree->left) : -1;
	rHeight = tree->right ? (int) binary_tree_height(tree->right) : -1;

	return (lHeight - rHeight);
}
