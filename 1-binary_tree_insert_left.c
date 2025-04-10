#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - function will add a new left node.
 * @parent: pointer to the parent node of the node to create.
 * @value: Value to put in the new node
 * Return: Pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node;

	if (parent == NULL)
		return (NULL);

	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
		return (NULL);

	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->left = NULL;
	new_left_node->right = NULL;

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		parent->left->parent = new_left_node;
	}

	parent->left = new_left_node;

	return (new_left_node);
}
