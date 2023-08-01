#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - insert new node at a given position
 * @head: pointer to the start of the list
 * @idx: the index of the list
 * @n: data to input in the list
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp = *head;
	unsigned int m;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	m = 0;

	while (temp && m < idx)
	{
		if (m == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
		m++;
	}

	return (NULL);
}
