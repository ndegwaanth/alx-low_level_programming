#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of number
 * @n: number to get the square root
 * Return: return -1 if n have no square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (square_root(n, 1, n / 2));
}
/**
 * square_root - find the square_root of begin
 * @n: the number to check in the computation of the root
 * @begin: the base case
 * @last: number to check on the base case
 * Return: square root
 */
int square_root(int n, int begin, int last)
{
	if (begin > last)
	{
		return (-1);
	}
	int center;
	int box;

	center = begin + (last - begin) / 2;
	box = center * center;

	if (box == n)
	{
		return (center);
	}
	if (box < n)
	{
		return (square_root(n, center + 1, last));
	}
	else
	{
		return (square_root(n, begin, center - 1));
	}
}
