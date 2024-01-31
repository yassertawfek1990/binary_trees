#include "binary_trees.h"

/**
 * binary_tree_node - Creatnode.
 * @parent: Acreate.
 * @value: Thenode.
 * Return: Iferro
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *no;

	no = malloc(sizeof(binary_tree_t));
	if (no == NULL)
		return (NULL);
	no->n = value;
	no->parent = parent;
	no->left = NULL;
	no->right = NULL;
	return (no);
}
