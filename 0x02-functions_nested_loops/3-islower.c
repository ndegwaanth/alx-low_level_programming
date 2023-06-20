#include "main.h"
/**
 * _islowe - checks for lowercase character.
 * @c: haracter that is beign checked
 * Return: 1 c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if  (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
