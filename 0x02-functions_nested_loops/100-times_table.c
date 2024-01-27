#include "main.h"

/**
 * print_times_table - prints the times table of @n
 * @n: the number whose tabke is printed
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, prod;

	if (n > 15 || n < 0)
		;
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				prod = i * j;
				if (prod > 9 && prod <= 99)
				{
					_putchar((prod / 10) + '0');
				}
				else if (prod > 99)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
				}
				_putchar(prod % 10 + '0');
				if (j < n)
				{
					_putchar(',');
					if (((j + 1) * i) <= 99)
						_putchar(' ');
					if (((j + 1) * i) <= 9)
						_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
