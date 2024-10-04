#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * print_value_checked - Prints the value checked in the skip list
 * @node: The current node being checked
 */
void print_value_checked(skiplist_t *node)
{
	if (node)
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
}

/**
 * linear_list_search - Performs a linear search in the linked list
 * @current: Pointer to the current node
 * @value: Value to search for
 *
 * Return: Pointer to the node containing the value, or NULL if not found
 */
skiplist_t *linear_list_search(skiplist_t *current, int value)
{
	while (current && current->n < value)
	{
		print_value_checked(current);
		current = current->next;
	}

	if (current)
	{
		print_value_checked(current);
		if (current->n == value)
			return (current);
	}

	return (NULL);
}

/**
 * linear_skip - Searches for a value in a sorted skip list
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: Pointer to the first node where value located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express_node = list;

	if (!list)
		return (NULL);

	/* Step 1: Find the range in the express lane */
	while (express_node->express && express_node->express->n < value)
	{
		print_value_checked(express_node);
		express_node = express_node->express;
	}

	/* Print the last express node checked */
	print_value_checked(express_node);
	if (express_node->express)
		printf("Value found between indexes [%lu] and [%lu]\n",
		       express_node->index, express_node->express->index);
	else
		printf("Value found between indexes [%lu] and [%lu]\n",
		       express_node->index, express_node->index + 1);

	/* Step 2: Linear search in the normal linked list */
	return (linear_list_search(express_node, value));
}
