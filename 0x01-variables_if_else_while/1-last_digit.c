#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - program start executing at this point
 * Description: this program assign a random number to n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	z = n % 10;
	if (z > 5)
		printf("Last digit of %d id %d and is greater than 5\n", n, z);
	if (z == 0)
		printf("Last digit of %d id %d and is greater than 5\n", n, z);
	if (z < 6 && z != 0)
		printf("Last digit of %d id %d and is greater than 5\n", n, z);
	return (0);
}
