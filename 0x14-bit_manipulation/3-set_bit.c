#include "main.h"

/**
 * set_bit - set value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: the bit value
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitmask;
	unsigned int value = 0;

	if (index < value || index >= sizeof(char) * 11)
	{
		return (-1);
	}

	bitmask = 1UL << index;
	*n |= bitmask;
	return (1);
}
