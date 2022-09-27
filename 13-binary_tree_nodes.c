#include "binary_trees.h"
/**
 * binary_tree_nodes-count nodes with atleast one child
 *
 * @tree: tree to be measure
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right != NULL)
		return (1 + binary_tree_nodes(tree->right));

	else if (tree->left != NULL && tree->right == NULL)
		return (1 + binary_tree_nodes(tree->left));

	else

		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}
