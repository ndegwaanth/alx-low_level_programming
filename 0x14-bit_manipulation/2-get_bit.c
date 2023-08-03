#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: input vale
 * @index: the passed value
 * Return: the bit index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bitmask;
	unsigned int value = 0;

	if (index < value || index > sizeof(char) * 10)
	{
		return (-1);
	}

	bitmask = 1 << index;
	return (n & bitmask ? 1 : 0);
}
