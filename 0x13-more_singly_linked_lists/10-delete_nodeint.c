#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of linked list
 * @head: first node of a linked list
 * @index: is the index of the node that should be deleted
 * Return: i if it succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node = NULL;
	unsigned int m;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	for (m = 0; m < index - 1; m++)
	{
		if (temp == NULL || (temp->next) == NULL)
		{
			return (-1);
			temp = temp->next;
		}
	}

	node = temp->next;
	temp->next = node->next;
	free(node);

	return (1);
}


