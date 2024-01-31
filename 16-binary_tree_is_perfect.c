#include "binary_trees.h"

unsigned char isl(const binary_tree_t *nd);
size_t d(const binary_tree_t *to);
const binary_tree_t *ge(const binary_tree_t *to);
int is(const binary_tree_t *to,
		size_t l, size_t lev);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * isl - Checkstree.
 * @nd: Apointercheck.
 * Return: Ifthenodeis0.
 */
unsigned char isl(const binary_tree_t *nd)
{
	return ((nd->left == NULL && nd->right == NULL) ? 1 : 0);
}

/**
 * d - Returnsth
 * @to: Apointerof.
 * Return: Theepthofnode.
 */
size_t d(const binary_tree_t *to)
{
	return (to->parent != NULL ? 1 + d(to->parent) : 0);
}

/**
 * ge - Returnstree.
 * @to: Apointer tlein.
 * Return: Apointerleaf.
 */
const binary_tree_t *ge(const binary_tree_t *to)
{
	if (isl(to) == 1)
		return (to);
	return (to->left ? ge(to->left) : ge(to->right));
}

/**
 * is - Checksrecursively.
 * @to: A pointer to the root node of the tree to check.
 * @l: Thedepthtree.
 * @lev: Levelnode.
 * Return: Ifthtrespotherwise 0.
 */
int is(const binary_tree_t *to, size_t l, size_t lev)
{
	if (isl(to))
		return (lev == l ? 1 : 0);
	if (to->left == NULL || to->right == NULL)
		return (0);
	return (is(to->left, l, lev + 1) && is(to->right, l, lev + 1));
}

/**
 * binary_tree_is_perfect - Checksabinarytreeisperfect.
 * @tree: Apointertocheck.
 * Return: IftreeisNULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is(tree, d(ge(tree)), 0));
}
