#include <stdio.h>
/**
 * main - program start executing from main
 * Description: Display 0 - 10
 * Return: 0 (Success)
 */
int main(void)
{
int number = 0;
while (number < 10)
{
	putchar(number);
	number++;
}
putchar('\n');
return (0);
}
