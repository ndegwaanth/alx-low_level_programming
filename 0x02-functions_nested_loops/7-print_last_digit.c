#include "main.h"
/**
 * print_last_digit - display the last digit of a number
 * @k: character to be checked
 * Return: 0 (Success)
 */
int print_last_digit(int k)
{
	int m;

	if (k < 0)
	{
		k = -k;
	}
	m = k % 10;

	if (m < 0)
	{
		m = -m;
	}
	_putchar(m + '0');
	return (m);
}
