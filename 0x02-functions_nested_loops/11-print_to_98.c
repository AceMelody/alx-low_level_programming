#include "main.h"

/**
 * print_to_98 - prints numbers from @n to 98
 * @n: beginning of count
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int b = 98;

	if (n < b)
	{
		while (n < b)
		{
			if (n <= 9)
				_putchar(n + '0');
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > b)
	{
		while (n > b)
		{
			if (n > b + 1)
				_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar((b / 10) + '0');
	_putchar((b % 10) + '0');
	_putchar('\n');
}
