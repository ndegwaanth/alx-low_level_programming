#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - add new node at the beginning of lists_t
 * @head: double pointer
 * @str: string pointer
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *storage;
	unsigned int size;

	for (size = 0; str[size]; size++)
	{
		storage = malloc(sizeof(list_t));
		if (storage == NULL)
		{
			return (NULL);
		}

		storage->str = strdup(str);
		storage->len = size;
		storage->next = (*head);
		(*head) = storage;
		return (*head);
	}
	return (*head);
}

