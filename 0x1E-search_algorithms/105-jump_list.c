#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted singly linked list of integers
 *             using the Jump search algorithm
 * @list: pointer to the head of the linked list
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where value is located, or NULL if value
 *         is not found or the list is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump_step, step;
	listint_t *prev, *current;

	if (!list || size == 0)
		return (NULL);

	jump_step = sqrt(size);
	prev = list;
	current = list;

	/* Jump through the list */
	while (current->next && current->index < size && current->n < value)
	{
		prev = current;
		for (step = 0; step < jump_step && current->next; step++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, current->index);

	/* Perform a linear search in the sublist */
	while (prev && prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
