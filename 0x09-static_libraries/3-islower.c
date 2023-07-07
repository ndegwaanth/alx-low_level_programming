#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _islower - checks the lower character
 * @c: the character to be checked
 * Return: 1 if c is lowercase 0 otherwise
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
