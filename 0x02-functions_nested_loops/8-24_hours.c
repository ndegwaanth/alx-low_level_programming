#include "main.h"

/**
 * jack_baue - print every minute of the day starting from 00:00 to  * 23:59
 * Description: display jack_bauer minute
 */
void jack_bauer(void)
{
	int h, m;

	h = 0;

	while (h < 24)
	{
		m = 0;

		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
	h++;
	}
}
