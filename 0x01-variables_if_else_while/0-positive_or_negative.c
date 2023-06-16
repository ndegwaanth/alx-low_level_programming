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
	/* return value is */
	return (0);
}

