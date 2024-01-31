#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insertright-child
 * @parent: Apointertheright-childin.
 * @value: Thenode.
 * Return: IfparentNULL.
 * Description: Ifright-child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *no;

	if (parent == NULL)
		return (NULL);
	no = binary_tree_node(parent, value);
	if (no == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		no->right = parent->right;
		parent->right->parent = no;
	}
	parent->right = no;
	return (no);
}
