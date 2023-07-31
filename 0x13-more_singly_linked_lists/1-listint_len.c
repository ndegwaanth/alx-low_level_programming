#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number in a linked listint_t
 * @h: input value
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int m = 0;

	for (; h; m++)
	{
		h = h->next;
	}
	return (m);
}
