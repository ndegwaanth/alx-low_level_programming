#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * @head: the start of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head)
	{
		return;
	}
	
	while (*head)
	{
		node = (*head)->next;
		*head = node;
		free(head);
	}
}

