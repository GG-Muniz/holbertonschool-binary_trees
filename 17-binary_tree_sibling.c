#include "binary_trees.h"
#include <stdio.h>
#include <stddef.h>
/**
 * binary_tree_sibling - function will find - if it exists - sibling of a node.
 * @node: pointer to the node to find the sibling.
 * Return: NULL there are no siblings and if parent is NULL.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
