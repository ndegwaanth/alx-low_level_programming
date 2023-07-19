#include <stdio.h>
#include "function_pointers.h"
/**
 *  array_iterator - execute a func given as parameter on array
 * @array: given array
 * @size: number of element
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array != NULL && action != NULL)
	{
		for (m = 0; m < size; m++)
		{
			action(array[m]);
		}
	}
}
