#include <stdio.h>
/**
 * main - the begining of execution
 * Description: This program display the alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alphabet[n]);
	}
	putchar('\n');
	return (0);
}

