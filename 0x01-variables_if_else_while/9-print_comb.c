#include <stdio.h>
/**
 * main - start execution
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
	putchar(',');
	putchar(' ');
	putchar(i + '0');
}
putchar('\n');
return (0);
}
