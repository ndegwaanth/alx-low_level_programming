#include <stdio.h>


/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
	unsigned long int m;
	unsigned long int before = 1;
	unsigned long int after = 2;
	unsigned long int l = 1000000000;
	unsigned long int before1;
	unsigned long int before2;
	unsigned long int after1;
	unsigned long int after2;

	printf("%lu", before);
	for (m = 1; m < 91; m++)
	{
		printf(", %lu", after);
		after += before;
		before = after - before;
	}
	before1 = (before / l);
	before2 = (before % l);
	after1 = (after / l);
	after2 = (after % l);
	for (m = 92; m < 99; ++m)
	{
		printf(", %lu", after1 + (after2 / l));
		printf("%lu", after2 % l);
		after1 = after1 + before1;
		before1 = after1 - before1;
		after2 = after2 + before2;
		before2 = after2 - before2;
	}
	printf("\n");
	return (0);
}
