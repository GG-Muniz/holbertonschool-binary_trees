#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * binary_tree_balance - function will measure the balance factor of B.T.
 * @tree: pointer to the root of the binary tree.
 * Return: returns the balance factor.
 */
int get_max_height(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	/* Calculate height of left subtree */
	if (tree->left != NULL)
		left_height = 1 + get_max_height(tree->left);

	/* Calculate height of right subtree */
	if (tree->right != NULL)
		right_height = 1 + get_max_height(tree->right);

	/* Return the balance factor */
	return (left_height - right_height);
}
/**
 * get_max_height -  Helper function to get max height of a subtree
 * @tree: pointer to the root of the binary tree.
 * Return: the max height of a subtree.
 */
int get_max_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree->left != NULL)
		left_height = 1 + get_max_height(tree->left);

	if (tree->right != NULL)
		right_height = 1 + get_max_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}
