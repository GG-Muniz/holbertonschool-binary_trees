#include "binary_trees.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_is_perfect - checks if the binary tree is perfect.
 * @tree: pointer to the root of the binary tree.
 * Return: 1 if perfect, else 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_depth = 0, right_depth = 0;
	const binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left = tree->left;
	while (left)
	{
		left_depth++;
		left = left->left;
	}

	right = tree->right;
	while (right)
	{
		right_depth++;
		right = right->right;
	}

	if (left_depth != right_depth)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
