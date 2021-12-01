#include "binary_trees.h"

/**
 * binary_tree_size - measure the size of binary tree
 * @tree: ponter to the root node
 * Return: size of tree
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t total;

	if (tree == NULL)
	{
		return (0);
	}

	total = binary_tree_size(tree->left) + 1;
	total += binary_tree_size(tree->right);

	return (total);
}
