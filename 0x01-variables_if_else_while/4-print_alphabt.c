#include <stdio.h>
/**
 * main - start execution
 * description: display alphabet rather than q and e
 * Return: 0 (Success)
 */
int main(void)
{
char p;

for (p = 'a'; p <= 'z'; p++)
{
	if (p != 'q' && p != 'e')
		putchar(p);
}
putchar('\n');
return (0);
}
