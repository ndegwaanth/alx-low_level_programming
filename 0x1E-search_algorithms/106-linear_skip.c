#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 * @list: Pointer to the head of the skip list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where the value is located, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev = list, *curr = list;

	if (!list)
		return (NULL);

	/* Traverse the express lane */
	while (curr->express && curr->express->n < value)
	{
		prev = curr;
		curr = curr->express;
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
	}

	/* When express lane ends or current express node has larger or equal value */
	if (curr->express)
	{
		prev = curr;
		curr = curr->express;
	}

	/* Linear search between two nodes */
	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, curr->index);
	while (prev != curr->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
