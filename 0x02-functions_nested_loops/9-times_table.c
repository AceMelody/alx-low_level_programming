#include "main.h"

/**
 * times_table - prints the multiplication table of 9 starting from 0
 *
 * Return: nothing
 */

void times_table(void)
{
	int prod = 0, i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (prod <= 9)
				_putchar(prod + '0');
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
			}
			else
				_putchar('\n');
		}
	}
}
