#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int v, w;

	for (v = '0'; v <= '9'; v++)
	{
		for (w = 0; w <= 14; w++)
		{
			if (w < 9)
			{
				_putchar((w / 10) + '0');
				_putchar((w % 10) + '0');
			}
			else
			{
				_putchar(w + '0');
			}
		}
		_putchar('\n');
	}
}
