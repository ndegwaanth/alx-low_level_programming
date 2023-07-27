#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - return the number of element in a linked list_t
 * @h: pointer pointing list_t
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t m;

	for (m = 0; h; m++)
	{
		h = h->next;
	}
	return (m);
}

