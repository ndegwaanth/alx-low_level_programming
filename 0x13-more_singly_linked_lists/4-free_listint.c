#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: the start of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
