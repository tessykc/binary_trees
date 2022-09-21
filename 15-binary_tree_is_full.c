#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * 
 * Return: 0 if tree is NULL 
 *         1 if the tree is full
 *         0 if the tree is not full
 * 
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}