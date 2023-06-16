#include <stdio.h>
/**
 * main - start execution
 * Deecription: prints all possible different combinations of two digits.
 * Return: 0 (Success)
 */
int main(void)
{
int m;
int n;
for (m = 0; m < 10; m++)
{
	for (n = n + 1; n < 10; n++)
	{
		putchar(m + '0');
		putchar(n + '0');
		if (m != 8 || n != 9)
		{
			putchar(',');
			putchar(' ');
			putchar(m, n, +'0');
		}
	}
}
putchar('\n');
return (0);
}
