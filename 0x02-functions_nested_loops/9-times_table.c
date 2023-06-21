#include "main.h"
/**
 * times_table - display the 9 times time table
 */
void time_table(void)
{
	int n, m, p;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; p < 10; n++)
		{
			p = n * m;
			if (m == 0)
			{
				_putchar(p + '0');
			}
			if (p < 10 && n != 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}																else if (p >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
