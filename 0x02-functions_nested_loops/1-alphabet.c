#include "main.h"
/**
 * main - start execution
 * Description: prints the alphabet, in lowercase
 * Return: 0(Success)
 */
/* this function retun nothing */
void print_alphabet(void)
{
char  alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	_putchar(alphabet);

_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
}
