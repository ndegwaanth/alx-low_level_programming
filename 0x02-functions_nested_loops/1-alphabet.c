#include "main.h"
/**
 * main - Start execution
 * Description: prints the alphabet, in lowercase
 * Return: 0(Success)
 */
int main(void)
{
	void print_alphabet(void)
	{
		char  alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
_putchar('\n');
return (0);
}
