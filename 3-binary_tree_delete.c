#include "binary_trees.h"
/**
 * binary_tree_delete-deletes an entire binary tree
 *
 * @tree:tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->left);
	free(tree);

	return (0);
}
