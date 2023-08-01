#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - add a new node at the begining of a listint_t
 * @head: the start of the list
 * @n: the data to be kept
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
