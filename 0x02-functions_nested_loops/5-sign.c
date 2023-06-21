#include "main.h"
/**
 * print_sign - print the sign number
 * @n: number to be checked
 * Return: 1 if n is positive, 0 if n is zero and -1 if n is less than
 * zero
 */
int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
