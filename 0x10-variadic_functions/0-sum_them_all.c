#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - summ of all its parameter
 * @n: input value
 * Return: sum (success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	int sum = 0;

	va_list args;

	va_start(args, n);
	if (n == 0)
	{
		return (0);
	}
	for (m = 0; m < n; m++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
