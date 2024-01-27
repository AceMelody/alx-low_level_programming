#include "main.h"

/**
 * print_to_98 - prints numbers from @n to 98
 * @n: the first number
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		while (n < 0)
		{
			_putchar('-');
			n *= -1;
			if (n > 99)
			{
				_putchar(n / 100 + '0');
				_putchar((n / 10) % 10 + '0');
			}
			else if (n > 9 && n <= 99)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
			n--;
			n *= -1;
		}
		if (n > 9)
			_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n > 98)
	{
		if (n > 99)
		{
			_putchar(n / 100 + '0');
			_putchar((n / 10) % 10 + '0');
		}
		else
			_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
	_putchar('\n');
}
