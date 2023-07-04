#include "main.h"
/**
 * print_chessboard - display the chessboard
 * @a: a pointer with size 8
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int m, n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			_putchar(a[m][n]);
		}
		_putchar('\n');
	}
}
