#include "binary_trees.h"
int _binary_tree_height(const binary_tree_t *tree);
int _power(int x);

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to root node of tree to check
 * Return: 1 if binary tree is perfect, else return 0
 */


int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right, left, power, extent;

	if (tree == NULL)
	{
		return (0);
	}

	left = _binary_tree_height(tree->left);
	right = _binary_tree_height(tree->right);
	extent = binary_tree_size(tree);

	if (extent == 1)
	{
		return (1);
	}

	if (left >= 0 && right >= 0 && left == right)
	{
		power = _power(left + 1);

		if (power - 1 == extent)
		{
			return (1);
		}
	}
	return (0);
}

/**
 * _binary_tree_height - Measure height of a binary tree
 * @tree: pointer to the root node
 * Return: height of tree or -1 if NULL
 */

int _binary_tree_height(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
	{
		return (-1);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left = _binary_tree_height(tree->left) + 1;
	right = _binary_tree_height(tree->right) + 1;

	if (left > right)
	{
		return (left);
	}

	else
	{
		return (right);
	}
}

/**
 * binary_tree_size - measure the size of a
 * binary tree from a given node
 * @tree: root node of tree to measure from
 *
 * Return: size of tree from a given node
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

/**
 * _power - get the power of 2 for a given number
 * @x: exponent
 * Return: power of 2 for given exponent
 */

int _power(int x)
{
	int num, j;

	for (j = 0, num = 1; j <= x; j++)
	{
		num*= 2;
	}

	return (num);
}
