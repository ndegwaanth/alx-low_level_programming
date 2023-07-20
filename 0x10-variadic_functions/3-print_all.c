#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - print anything
 * @format: input value
 * Return: void
 */
void print_all(const char * const format, ...)
{
    unsigned int m;
    int n;
    char *string;
    va_list items;

    va_start(items, format);
    m = 0;
    while (format != NULL && format[m] != '\0')
    {
        switch (format[m])
        {
            case 'c':
                printf("%c", va_arg(items, int));
                n = 0;
                break;
            case 'i':
                printf("%d", va_arg(items, int));
                n = 0;
                break;
            case 'f':
                printf("%f", va_arg(items, double));
                n = 0;
                break;
            case 's':
                string = va_arg(items, char*);
                if (string == NULL)
                {
                    string = "(nil)";
                }
                printf("%s", string);
                n = 0;
                break;
            default:
                n = 1;
                break;
        }
        if (format[m + 1] != '\0' && n == 0)
            printf(",");
        m++;
    }
    printf("\n");
    va_end(items);
}
