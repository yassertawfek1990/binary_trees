#include "binary_trees.h"

/**
 * binary_tree_balance - Measuresbinarytree.
 * @tree: Apointerfactor.
 * Return: IftreeisNULLfactor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Measurestheheighttree.
 * @tree: Apointertothe.
 * Return: IftreeisNULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t ala = 0;
		size_t ara = 0;

		ara = 0;
		ala = 0;
		ala = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		ara = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((ala > ara) ? ala : ara);
	}
	return (0);
}
