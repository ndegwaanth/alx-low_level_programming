#include <stdio.h>
#include <ctype.h>
/**
 * main - the start of execution
 * Description: program display both lower and uppercase alphabet
 * Return: 0 (Success)
 */
int main(void)
{
	char m = 'a';
	char n = 'a';

	while (m <= 'z')
	{
		putchar(m);
		m++;
	}
	while (n <= 'z')
	{
		putchar(toupper(n));
		n++;
	}
	putchar('\n');
	return (0);
}
