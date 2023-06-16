#include <stdio.h>
/**
 * main - execution start here
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
int letter;
for (letter = 0; letter < 16; letter++)
{
	if (letter < 10)
		putchar(letter + '0');
	else
		putchar(letter - 10 + 'a');
}
putchar('\n');
return (0);
}
