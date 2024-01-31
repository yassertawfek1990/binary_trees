#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insertsof anothertree.
 * @parent: Apointernodeleft-child in.
 * @value: Thenode.
 * Return: IfparentisNULL
 * Description: Ifparentalready
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *no;

	if (parent == NULL)
		return (NULL);
	no = binary_tree_node(parent, value);
	if (no == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		no->left = parent->left;
		parent->left->parent = no;
	}
	parent->left = no;
	return (no);
}
