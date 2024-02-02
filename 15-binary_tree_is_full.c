#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Check if tree is NULL */
	if (tree == NULL)
		return (0);

	/* If the current node has no children, it is a leaf, and the tree is full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If the current node has both left and right children,
	   recursively check if both subtrees are full */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If any subtree has a single child, the tree is not full */
	return (0);
}
