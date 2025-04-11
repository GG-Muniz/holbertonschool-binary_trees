#include "binary_trees.h"
#include <stdio.h>
#include <stddef.h>
/**
 * binary_tree_nodes - function will count all nodes with one child.
 * @tree: pointer to the root of the binary tree.
 * Return: number of nodes with atleast 1 child.
 *
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
