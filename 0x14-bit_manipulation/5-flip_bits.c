#include "main.h"

/**
 * flip_bits - return thenumber of bits you would need to flip
 * @n: the size of the bit
 * @m: the bit
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip_bits = n ^ m;
	unsigned count = 0;

	for (; flip_bits;)
	{
		count += flip_bits & 1;
		flip_bits >>= 1;
	}

	return (count);
}
