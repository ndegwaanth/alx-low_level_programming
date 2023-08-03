#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: the number to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/*a 32 bit*/
	int bit = sizeof(int) * 3;
	int address = 1 << (bit - 1);
	int m;

	for (m = 0; m < bit; m++)
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
