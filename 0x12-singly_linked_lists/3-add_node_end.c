#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * *add_node_end - add new node at the end of list_t
 * @head: double pointer of the first node
 * @str: pointer string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int size;
	list_t *temp = *head;

	for (size = 0; str[size]; size++)
	{
		new_node = malloc(sizeof(list_t));
		if (!new_node)
			return (NULL);

		new_node->str = strdup(str);
		new_node->len = size;
		new_node->next = NULL;
		if (*head == NULL)
		{
			*head = new_node;
			return (new_node);
		}

		while (temp->next)
		{
			temp = temp->next;
			temp->next = new_node;
			return (new_node);
		}
	}
	return (new_node);
}
