#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
int z;
char letter;

z = 0;
while (z < 10)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
z++;
return (0);
}
