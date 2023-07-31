#include <stdio.h>
#include "lists.h"

/**
 * print_listint - display all the element of a listint
 * @h: the input value
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int m = 0;

	for (; h; m++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (m);
}
