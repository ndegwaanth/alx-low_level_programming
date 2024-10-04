#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list.
 * @list: Pointer to the head of the skip list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node = list, *express_node;

	if (list == NULL)
		return (NULL);

	while (node->express != NULL && node->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			node->index, node->n);
		node = node->express;
	}

	printf("Value checked at index [%lu] = [%d]\n",
		node->index, node->n);

	express_node = node->express;

	if (express_node == NULL)
		express_node = node->next;

	printf("Value found between indexes [%lu] and [%lu]\n",
		node->index, express_node->index);

	while (node != express_node)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			node->index, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}
