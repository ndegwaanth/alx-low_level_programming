#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: the number to find the factorials
 * Return: 0 (Success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
