#include "main.h"
/**
 * print_diagonal - draws the diagonal line on the terminal
 * @n: number of times
 * Return: 0 (Success)
 */
void print_diagonal(int n)
{
	int m, p;

	if (n <= 0)
	{
		_putchar('n');
	}
	for (m = 0; m <= n; m++)
	{
		for (p = 0; p <= m; p++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
