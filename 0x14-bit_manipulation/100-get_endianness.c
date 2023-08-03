#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: 0 if big endian 1 if little endian
 */
int get_endianness(void)
{
	int m = 1;
	char *pointer = (char*)&m;

	if (*pointer == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
