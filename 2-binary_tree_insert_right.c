#include binary_trees.h

/**
 * 
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * 
 * Return: a pointer to the created node
 *          NULL on failure or if parent is NULL
 * 
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    if (!parent)
        return(NULL);

    new = malloc(sizeof(binary_tree_t));
    if (!new)
        return(NULL);

    new->n = value;
    new->parent = parent;
    new->right = parent->right;
    new->left = NULL;
    parent->right = new;
    if (new->right)
        new->right->parent = new;
    return(new);
}