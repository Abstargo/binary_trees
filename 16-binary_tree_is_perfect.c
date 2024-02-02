#include "binary_trees.h"

/**
 * tree_is_perfect - Checks if a binary tree is perfect and returns the height
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree if perfect, 0 otherwise
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree->left && tree->right)
	{
		left_height = 1 + tree_is_perfect(tree->left);
		right_height = 1 + tree_is_perfect(tree->right);

		if (right_height == left_height && right_height != 0)
			return right_height;

		return 0;
	}
	else if (!tree->left && !tree->right)
	{
		/* Leaf node is always considered perfect */
		return 1;
	}
	else
	{
		/* Node has only one child, not perfect */
		return 0;
	}
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		/* An empty tree is not perfect */
		return 0;
	}
	else
	{
		result = tree_is_perfect(tree);
		return (result != 0);
	}
}
