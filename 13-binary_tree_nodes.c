#include "binary_trees.h"

/**
 * binary_tree_nodes - Countstree.
 * @tree: Apointeodes.
 * Return: Ifcount.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t ne;

	ne = 0;
	if (tree)
	{
		ne += (tree->left || tree->right) ? 1 : 0;
		ne += binary_tree_nodes(tree->left);
		ne += binary_tree_nodes(tree->right);
	}
	return (ne);
}
