#include <stdio.h>
/**
 * main - start execution
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int i;

for (i = 48; i <= 57; i++)
{
	putchar(i);
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
