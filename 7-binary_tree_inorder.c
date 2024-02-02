#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal of a binary tree
 * @tree: Pointer to the root node
 * @func: Pointer to a function to call for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);    /* Traverse left subtree */
	func(tree->n);                            /* Visit current node */
	binary_tree_inorder(tree->right, func);   /* Traverse right subtree */
}
