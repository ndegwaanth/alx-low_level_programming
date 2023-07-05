#include "main.h"
/**
 * _pow_recursion - return the value of x raised to power of y
 * @x: the value to be raised
 * @y: x is raised to this y
 * Return: result of x when raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
