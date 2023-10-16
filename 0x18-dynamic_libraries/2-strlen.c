#include "main.h"

/**
 * _strlen - retunr string length
 * @s: strint to check
 * Return: 0 (success) the length
 */
int _strlen(char *s)
{
	int m;

	for (m = 0; *s != '\0'; m++)
	{
		s++;
	}
	return (m);
}
