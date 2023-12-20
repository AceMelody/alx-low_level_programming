#include "main.h"

/**
 * print_number - prints an integer
 * @n: the number to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	int i, k = n, v = 1, count = 0;

	if (n < 0)
	{
		k = n *= -1;
		_putchar('-');
	}
	while (k > 9)
	{
		k = k / 10;
		count++;
	}
	_putchar(k + '0');
	for (i = count; i > 0; i--)
		v *= 10;
	k = n - (k * v);
	v /= 10;
	count--;
	if (k < 9)
	{
		while (count > 0 && k < 9)
		{
			_putchar(0 + '0');
			count--;
			v /= 10;
		}
	}
	else if (k > 9)
	{
		while ((k - v) < 0)
		{
			_putchar(0 + '0');
			v /= 10;
		}
		while ((k -v) > 0)
		{
			_putchar((k / v) + '0');
			k = k % v;
			v /= 10;
			if (k < v && k != 0)
			{
				_putchar(0 + '0');
				v /= 10;
			}
		}
	}
	if (n > 9)
		_putchar(k + '0');
}
