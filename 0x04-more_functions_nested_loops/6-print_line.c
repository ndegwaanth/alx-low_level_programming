#include "main.h"
/**
 * print_line - draws a straight line inthe terminal
 * @n: times in which character should be printed
 * Return: 0 (Success)
 */
void print_line(int n)
{
	int m;

	m = 0;
	while (m <= n)
	{
		_putchar('_');
		m++;
	}
	_putchar('\n');
}
