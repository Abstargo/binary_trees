#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal of a binary tree
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);    /* Traverse left subtree */
	binary_tree_postorder(tree->right, func);   /* Traverse right subtree */
	func(tree->n);                             /* Visit current node */
}
