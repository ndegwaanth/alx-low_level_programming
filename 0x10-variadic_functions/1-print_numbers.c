#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - print numbers
 * @separator: input value
 * @n: input value
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list mine;

	va_start(mine, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (m = 0; m < n; m++)
	{
		printf("%d", va_arg(mine, int));
		if (m < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mine);
}
