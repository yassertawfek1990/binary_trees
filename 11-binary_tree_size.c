#include "binary_trees.h"

/**
 * binary_tree_size - Measuresthesizeofabinarytree.
 * @tree: Apointertotheof.
 * Return: Thetree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t so;

	so = 0;
	if (tree)
	{
		so = so + 1;
		so += binary_tree_size(tree->left);
		so += binary_tree_size(tree->right);
	}
	return (so);
}
