#include "binary_trees.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * binary_tree_preorder - function uses preorder to traverse tree.
 * @tree: pointer to the root node of the tree.
 * @func: pointer to a function to call for each node.
 * Description: if tree or func is NULL, do nothing.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
