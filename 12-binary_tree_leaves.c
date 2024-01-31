#include "binary_trees.h"

/**
 * binary_tree_leaves - Countstree.
 * @tree: Atheleavesof.
 * Return: Thetree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lo;

	lo = 0;
	if (tree)
	{
		lo += (!tree->left && !tree->right) ? 1 : 0;
		lo += binary_tree_leaves(tree->left);
		lo += binary_tree_leaves(tree->right);
	}
	return (lo);
}
