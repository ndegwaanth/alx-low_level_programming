#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,  * Return: 0 (Success)
 */
int main(void)
{
int count;

unsigned long fibonaci1 = 0, fib2 = 1, sum;

for (count = 0; count < 50; count++)
{
	sum = fibonaci1 + fib2;
	printf("%lu", sum);
	fibonaci1 = fib2;
        fib2 = sum;
        if (count == 49)
               printf("\n");
        else
               printf(", ")
}
return (0);
}
