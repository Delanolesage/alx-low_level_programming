#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 *
 * void: nothing to return
 */
void jack_bauer(void)
{
	int n;
	int h2, h1, m2, m1;

	h2 = 0;
	h1 = 0;
	m2 = 0;
	m1 = 0;

	for (n = 0; n < 1440; n++)
	{
		_putchar(h2 + '0');
		_putchar(h1 + '0');
		_putchar(':');
		_putchar(m2 + '0');
		_putchar(m1 + '0');
		_putchar('\n');
		m1++;
		if (m1 > 9)
		{
			m1 = 0;
			m2++;
		}
		if (m2 > 5)
		{
			m2 = 0;
			h1++;
		}
		if (h1 > 9)
		{
			h1 = 0;
			h2++;
		}
	}
}
