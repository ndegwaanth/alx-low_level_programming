#include <stdio.h>
void display(void) __attribute__ ((constructor));

/**
 * display - print sentence
 * Return: void
 */
void display(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
