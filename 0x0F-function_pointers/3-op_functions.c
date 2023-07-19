#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - sum
 * @a: input value
 * @b: inut value
 * Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtract
 * @a: input value
 * @b: input value
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a:input value
 * @b:input value
 * Return: Multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Division
 * @a: input value
 * @b: input value
 * Return: Division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a / b);
}
/**
 * op_mod - Remainder
 * @a: input value
 * @b: input value
 * Return: Remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a % b);
}
