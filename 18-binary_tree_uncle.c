#include "binary_trees.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_uncle - funtion will find if the uncle of a node.
 * @node: pointer to the node that to find the uncle.
 * Return: NULL if no node and if no uncle.
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *grandparent = node->parent->parent;

	if (grandparent->left == node->parent)
		return (grandparent->right);

	if (grandparent->right == node->parent)
		return (gradparent->left);

	return (NULL);
}
