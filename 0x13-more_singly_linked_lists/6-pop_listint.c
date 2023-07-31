#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: the start of the list
 * Return: the head node data(n)
 */
int pop_listint(listint_t **head)
{
	int k;
	listint_t *node;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	k = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
}
