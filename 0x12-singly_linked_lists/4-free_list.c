#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t
 * @head: pointer
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node;

	while (head)
	{
		node = head->next;
		free(head->next);
		free(head);
		head = node;
	}
}
