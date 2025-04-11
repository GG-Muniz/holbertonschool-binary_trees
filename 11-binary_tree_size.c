#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>
/**
 * binary_tree_size - function will determina a binary tree's size.
 * @tree: pointer to the root of the binary tree.
 * Return: the size of the binary tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (size);
}
