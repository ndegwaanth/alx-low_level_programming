#include "search_algos.h"
/**
 * advanced_recursive_binary - binary search implementation
 * @array: array to search
 * @low: lowest index to begin searching
 * @high :highest index of array
 * @s_value: value to search
 * Return: index of s_value or
 * -1 if s_value not in array
 */
int advanced_recursive_binary(int *array, size_t low, size_t high, int s_value)
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
	{
		if (array[medium - 1] == s_value)
			return advanced_recursive_binary(array, low, medium, s_value);
		return (medium);
	}
	if (array[medium] < s_value)
		return advanced_recursive_binary(array, medium + 1, high, s_value);
	if (array[medium] > s_value)
		return advanced_recursive_binary(array, low, medium - 1, s_value);
	return (-1);
}
/**
 * advanced_binary - searches using binary search algorithm
 * to find first occurance of value in array
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: -1 on null array and if value not in array
 * or returns the index of value in array
 */
int advanced_binary(int *array, size_t size, int value)
{
	int s_value;
	size_t low, high;

	if (size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	s_value = advanced_recursive_binary(array, low, high, value);
	if (s_value == -1)
		return (-1);
	return (s_value);
}
