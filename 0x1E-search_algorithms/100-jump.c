#include "search_algos.h"

/**
 * jump_search - search value in a sorted array of integers using jump search
 * @array: this is the array to search for
 * @size: this is the length of the array
 * @value: this is the target element
 * Return: return -1 if the array is null
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = (size_t)sqrt(size);
	size_t prev = 0;
	size_t current = jump_step;
	size_t i;

	if (array == NULL)
		return (-1);

	while (array[current - 1] < value && current < size)
	{
		printf("Value checked array[%ld] = [%d]\n", current - 1, array[current - 1]);
		prev = current;
		current += jump_step;
		if (current > size)
			current = size;
	}

	/*Linear search within the block*/
	for (i = prev; i < current; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
