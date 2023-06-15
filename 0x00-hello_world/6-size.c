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
printf("size of a char: %lu byte(s)\n", (unassigned long)sizeof(x));
printf("size of a int: %lu byte(s)\n", (unassigned long)sizeof(y));
printf("size of a long int: %lu byte(s)\n", (unassigned long)sizeof(z));
printf("size of a long long int: %lu byte(s)\n", (unassigned long)sizeof(m));
printf("size of a float: %lu byte(s)\n", (unassigned long)sizeof(n));
return (0);
}
