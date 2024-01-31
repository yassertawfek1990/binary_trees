#include "binary_trees.h"

/**
 * is_full_recursive - Checksifabinarytreeisfullrecursively.
 * @tree: Apointercheck.
 * Return: IftreeisnotOtherwise1.
 */
int is(const binary_tree_t *to)
{
	if (to != NULL)
	{
		if ((to->left != NULL && to->right == NULL) ||
		    (to->left == NULL && to->right != NULL) ||
		    is(to->left) == 0 || is(to->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Checksifabinarytreeisfull.
 * @tree: Apointercheck.
 * Return: Iftree0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is(tree));
}
