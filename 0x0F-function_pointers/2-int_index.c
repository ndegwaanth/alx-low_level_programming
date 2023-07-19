#include <stdlib.h>
#include <stdbool.h>
/**
 * int_index - searches for an integer
 * @array:the given array
 * @size: the array size
 * @cmp: the pointer to function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (size <= 0)
	{
		return (-1);
	}
	else if (size > 0)
	{
		if (array && cmp)
		{
			for (m = 0; m < size; m++)
			{
				if (cmp(array[m]))
				{
					return (m);
				}
			}
		}
	}
	return (-1);

}
