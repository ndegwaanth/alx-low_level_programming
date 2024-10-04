#include "search_algos.h"

/**
 * create_skiplist - Creates a skip list from an array of integers
 * @array: The array of integers to create the skip list from
 * @size: The size of the array
 *
 * Return: A pointer to the head of the created skip list
 */
skiplist_t *create_skiplist(int *array, size_t size)
{
	skiplist_t *head = NULL, *node = NULL, *express = NULL;
	size_t i;

	if (!array || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		node = malloc(sizeof(skiplist_t));
		if (!node)
			return (NULL);

		node->n = array[i];
		node->index = i;
		node->next = head;
		node->express = NULL;
		head = node;

		/* Set express lane */
		if (i % (size_t)(sqrt(size)) == 0)
		{
			if (express)
				express->express = node;
			express = node;
		}
	}

	/* Reverse the list to maintain correct order */
	head = reverse_list(head);
	return (head);
}

/**
 * reverse_list - Reverses a linked list
 * @head: Pointer to the head of the list
 *
 * Return: Pointer to the new head of the reversed list
 */
skiplist_t *reverse_list(skiplist_t *head)
{
	skiplist_t *prev = NULL, *next = NULL;

	while (head)
	{
		next = head->next;
		head->next = prev;
		prev = head;
		head = next;
	}
	return (prev);
}

/**
 * free_skiplist - Frees a skip list
 * @list: Pointer to the head of the list
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *temp;

	while (list)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}
