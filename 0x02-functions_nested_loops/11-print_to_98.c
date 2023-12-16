#include "main.h"

/**
 * print_to_98 - prints numbers from @n to 98
 * @n: beginning of count
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			if (n < 0)
			{
				n *= -1;
				_putchar('-');
			}
			if (n <= 9)
				_putchar(n + '0');
			else if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			if (n > 99)
				_putchar((n / 100) + '0');
			_putchar(((n / 10) % 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	_putchar((98 / 10) + '0');
	_putchar((98 % 10) + '0');
	_putchar('\n');
}
