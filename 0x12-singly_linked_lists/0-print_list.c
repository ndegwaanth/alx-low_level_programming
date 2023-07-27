#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - prints the element of a list_t list
 * @h: input values
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s", h->len, h->str);
		}
		h = h->next;
		m++;
	}
	return (m);
}

