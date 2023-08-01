#include "lists.h"

/**
 * *get_nodeint_at_index - return the node of a listint_t linked list
 * @head: the start of the linked list
 * @index: node index start from 0
 * Return: nth node of a listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *node = head;

	while (node && index > m)
	{
		node = node->next;
		m++;
		return (node ? node : NULL);
	}
}
