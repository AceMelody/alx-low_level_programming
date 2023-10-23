#include "main.h"

/**
 * times_table - prints the times table of 9
 *
 * Return: nothing
 */

void times_table(void)
{
	int x, w, v;

	for (w = 48; w <= 57; w++)
	{
		for (v = 48; v <= 57; v++)
		{
			x = v * w;
			_putchar(x);
			if (v != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('\0');
			}
		}
		_putchar('\n');
	}
}
