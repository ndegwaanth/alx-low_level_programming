#include <stdio.h>
/**
 * main - start execution
 * Description: Display alphabet in reverse
 * Return: 0 (Success)
 */
int main(void)
{
char p;
for (p = 'a'; p <= 'z'; p--)
{
	putchar(p);
}
putchar('\n');
return (0);
}
