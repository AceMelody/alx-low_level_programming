#include "main.h"

/**
 * times_table - prints the times table of 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int x, w, v, fd, ld;

	for (w = 0; w <= 9; w++)
	{
		for (v = 0; v <= 9; v++)
		{
			x = v * w;
			fd = x / 10;
			ld = x % 10;
			if (x <= 9)
			{
				_putchar(ld + '0');
			}
			else
			{
				_putchar('\b');
				_putchar(fd + '0');
				_putchar(ld + '0');
			}
			if (v < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
