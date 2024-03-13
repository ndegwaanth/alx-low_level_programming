#include "search_algos.h"

/**
*binary_search - searches fot a value in a sorted arrat of integers
 *@array: This are the array to soarch for
 *@size: This is the length of the aaray
 *@value: This is the target value to search
 *Return: return -1 if array is null
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low;
	size_t high;
	size_t m;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		size_t mid = (low + high) / 2;

		printf("Searching in array: ");
		for (m = low; m <= high; m++)
		{
			printf("%d", array[m]);
			if (m < high)
				printf(",");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}
