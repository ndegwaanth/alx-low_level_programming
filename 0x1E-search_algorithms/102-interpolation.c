#include <stdio.h>

/**
 * interpolation_search - searches for value using exponential algorithm
 * @array: this is the array use
 * @size: this is the length of the array
 * @value: this is the target element to search
 * Return: return -1 id the array is null
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		/*Calculate the probe position*/
		size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

			/*If the value is found at pos*/
			if (array[pos] == value)
				return (pos);

			/*If the value is smaller, search in the left subarray*/
			if (array[pos] < value)
				low = pos + 1;
			/*If the value is larger, search in the right subarray*/
			else
				high = pos - 1;
		}
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
	}

	return (-1);
}
