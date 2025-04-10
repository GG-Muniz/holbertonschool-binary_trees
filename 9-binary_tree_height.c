#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_height - function will give the height of a binary tree.
 * @tree: pointer to the root of the binary tree.
 * Return: the size (height) of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	/* If tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* If there's a left child, calculate its height */
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);

	/* If there's a right child, calculate its height */
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);

	/* Return the greater of the two heights */
	return (left_height > right_height ? left_height : right_height);
}
