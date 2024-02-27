#include <stdlib.h>
#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
		binary_tree_t *new_node;

		new_node = malloc(sizeof(binary_tree_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		

		if (parent->left != NULL)
		{
			new_node->left = parent->left;
			parent->left->parent = new_node;
		}

		parent->left = new_node;

		return (new_node);


}
