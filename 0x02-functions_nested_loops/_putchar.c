#include "main.h"
#include <unistd.h>
/**
 * _putchar write the character c to stdout
 * @c: The character to print
 *
 * Return: 0 (Success)
 * on error, return -1 and error is set appeopriate
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
