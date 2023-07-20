#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_strings - print string
 * @separator: distinction
 * @n: input value
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *string;
	va_list length;

	va_start(length, n);
	if (separator == NULL)
		separator = "";


	for (m = 0; m < n; m++)
	{
		string = va_arg(length, char*);
		if (string == NULL)
			string = "(nil)";
		printf("%s", string);
		if (m < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(length);
}
