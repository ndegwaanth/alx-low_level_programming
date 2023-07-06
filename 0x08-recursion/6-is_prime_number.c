#include "main.h"
/***
 * is_prime_number - display the prime number
 * @n: number to check if it's prime
 * Return: i if its prime otherwise return 0
 */
int is_prime_number(int n)
{
	if ((n % 5 == 0) || ((n % 10) % 2 == 0))
	{
		return (0);
	}
	else if (n <= 0)
	{
		return (0);
	}
	return (1);
}
