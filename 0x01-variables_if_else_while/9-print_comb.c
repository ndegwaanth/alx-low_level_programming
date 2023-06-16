#include <stdio.h>
/**
 * main - start execution
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
putchar('0');
int i;
for (i = 0; i < 10; i++)
{
	putchar(i + '1');
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}
