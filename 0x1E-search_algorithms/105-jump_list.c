#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list using Jump search
 * @list: Pointer to the head of the list
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where value is located, or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump_step = sqrt(size);
    listint_t *prev = list;
    listint_t *current = list;
    
    if (!list)
        return (NULL);

    /* Jump through the list */
    while (current->next && current->index < size - 1)
    {
        prev = current;
        for (size_t i = 0; i < jump_step && current->next; i++)
            current = current->next;

        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        if (current->n >= value)
            break;
    }

    /* Perform linear search between prev and current */
    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    while (prev && prev->index <= current->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->n == value)
            return (prev);
        prev = prev->next;
    }

    return (NULL);
}
