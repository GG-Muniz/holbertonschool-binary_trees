#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Return: Depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL || tree->parent == NULL)
		return (0);

	/* Recursively calculate the depth by adding 1 to the parent's depth */
	return (binary_tree_depth(tree->parent) + 1);
}
