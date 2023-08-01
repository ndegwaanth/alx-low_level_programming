#include "lists.h"

/**
 * sum_listint - return the sum of all the data
 * @head: the first element of a list
 * Return: the sumvof all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
