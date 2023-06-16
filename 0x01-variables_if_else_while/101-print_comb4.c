#include <stdio.h>
/**
 * main - start execution
 * Description: prints all possible different combinations of three digits.
 * Return: 0 (Success)
 */
int main(void)
{
int m;
int n;
int k;
for (m = 0; m < 10; m++)
{
	for (n = m + 1; n < 10; n++)
	{
		for (k = n + 1; k < 10; k++)
		{
			putchar(m + '0');
			putchar(n + '0');
			putchar(k + '0');
			if (m != 7 || n != 8 || k != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);
}
