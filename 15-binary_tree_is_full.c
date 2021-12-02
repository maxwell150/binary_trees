#include "binary_trees.h"

/**
 * binary_tree_is_full - check if the binary tree is full
 * @tree: pointer ti the root node
 * Return: returns 1 if node is leaf and highest node else 0 if NULL;
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	right = left = 0;
	if ((tree->left == NULL && tree->right != NULL) || tree == NULL
		 || (tree->left != NULL && tree->right == NULL))
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	if (right == 1 && left == 1)
	{
		return (1);
	}
	return (0);
}
