#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: the size of the bit
 * @index: value of the bits
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitmask;
	unsigned int value = 0;

	if (index < value || index <= sizeof(unsigned long int))
	{
		return (-1);
	}

	bitmask = ~(1UL << index);
	*n &= bitmask;
	return (1);
}
