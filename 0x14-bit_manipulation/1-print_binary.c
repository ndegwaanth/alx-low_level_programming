#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: the number to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/*a 32 bit*/
	unsigned int bit = sizeof(int) * 3;
	unsigned int address = 1UL << (bit - 1);

	for (; address;)
	{
		if (n & address)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		address >>= 1;
	}
}
