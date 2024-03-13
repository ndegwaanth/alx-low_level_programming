#include "search_algos.h"
/**
 * recursive_binary - binary search implementation
 * @array: array to search
 * @low: lowest index to begin searching
 * @high :highest index of array
 * @s_value: value to search
 * Return: index of s_value or
 * -1 if s_value not in array
 */
int recursive_binary(int *array, size_t low, size_t high, int s_value)
{
	size_t medium, i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
	}
	printf("\n");
	if (low > high - 1)
		return (-1);
	medium = ((high - low) / 2) + low;
	if (array[medium] == s_value)
		return (medium);
	if (array[medium] < s_value)
		return recursive_binary(array, medium + 1, high, s_value);
	if (array[medium] > s_value)
		return recursive_binary(array, low, medium - 1, s_value);
	return (-1);
}
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: array to search through
 * @size: size of array
 * @value: value to sarch for
 * Return: -1 if value is not find
 * else returns index of value in array
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, low;
	int val;
	
	if (size == 0)
		return (-1);
	while ((bound < size) && (array[bound] < value))
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	low = bound / 2;
	size -= 1;
	if (bound > size)
		bound = size;
	printf("Value found between indexes [%ld] and [%ld]\n", low, bound);
	val = recursive_binary(array, low, bound, value);
	return (val);
}
