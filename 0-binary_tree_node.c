#include binary-trees.h
/**
 * binary_tree_node - creates a binary tree
 * @parent: pointer to the parent node
 * @value:  value to put in the new node
 * 
 * Return: a pointer to the new node
 * 
 */
binary_tree_t *binary_tree_node(binary_treee_t *parent, int value)
{
    *binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (!new)
        return(NULL);
    new->n = value;
    new->parent = parent;
    new->left = NULL;
    new->right = NULL;
    return(new);
}