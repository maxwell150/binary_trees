#include "binary_trees.h"

/**
 * binary_tree_height - measures height
 * @tree: pointer to root node of tree to measure
 * Return: height or -1 if nULL
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
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to root node of tree to measure
 * Return: balance factor or NULL or 0
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
	{
		return (0);
	}

	right = _binary_tree_height(tree->right);
	left = _binary_tree_height(tree->left);

	return (left - right);
}

