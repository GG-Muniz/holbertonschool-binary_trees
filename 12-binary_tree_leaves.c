#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>
/**
 * binary_tree_leaves - fucntion will count number of leaves in a binary tree.
 * @tree: pointer to the root of the binary tree.
 * Return: the amount of leaves in the binary tree.
 *
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));

}
