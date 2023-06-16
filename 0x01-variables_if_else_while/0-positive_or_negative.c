#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: display a random number to the variable n
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if	(n == 0)
	{
		print("%d is zero", n);
	}
	else
	{
		printf("is negative");
	}
	/* return value is */
	return (0);
}

