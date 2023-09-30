#include "main.h"

/**
 * times_table - prints the times table of 9
 *
 * Return: nothing
 */

void times_table(void)
{
	int x, w, v;

	for (w = '0'; w <= '9'; w++)
	{
		_putchar('0');
		for (v = '0'; v <= '9'; v++)
		{
			x = v * w;
			if (v < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
