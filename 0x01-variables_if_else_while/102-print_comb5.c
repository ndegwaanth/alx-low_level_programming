#include <stdio.h>
/**
 * main - start execution
 * description: prints all possible combinations of two two-digit numbers.
 * Return: 0 (Success)
 */
int main(void)
{
int m, n;

for (m = 0; m < 100; m++)
{
	for (n = m; n < 100; n++)
	{
		int ten1 = m / 10;
		int one1 = n % 10;
		int ten2 = n / 10;
		int one2 = m % 10;

		putchar(ten1 / 10 + '0');
		putchar(ten1 % 10 + '0');
		putchar(one1 / 10 + '0');
		putchar(one1 % 10 + '0');
		putchar(' ');
		putchar(ten2 / 10 + '0');
		putchar(ten2 % 10 + '0');
		putchar(one2 / 10 + '0');
		putchar(one2 % 10 + '0');
		if (m != 99 || n != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}
