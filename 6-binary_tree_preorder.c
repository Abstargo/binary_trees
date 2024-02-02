#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order traversal of a binary tree
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);           /* Visit current node */
	binary_tree_preorder(tree->left, func);    /* Traverse left subtree */
	binary_tree_preorder(tree->right, func);   /* Traverse right subtree */
}
