#include <stdio.h>
/**
 * main - every program start executing at the main
 * Description: This program display the size of the data type
 * Return: (0) (Success)
 */
int main(void)
{
	char x;
	int y;
	long int z;
	long long int m;
	float n;

	printf("size of a char: %d byte(s)\n", sizeof(x));
	printf("size of a int: %d byte(s)\n", sizeof(y));
	printf("size of a long int: %d byte(s)\n", sizeof(z));
	printf("size of a long long int: %d byte(s)\n", sizeof(m));
	printf("size of a float: %d byte(s)\n", sizeof(n);
	return (0);
}
