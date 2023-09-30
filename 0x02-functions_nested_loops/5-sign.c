#include "main.h"

/**
 * print_sign - prints the sign that precedes an integer
 * @n: the number whose sign is checked
 *
 * Return: 1, if posistive, 0, if zero, -1, if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
