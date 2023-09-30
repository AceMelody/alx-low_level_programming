#include "main.h"

/**
 * print_to_98 - prints numbers from @n to 98
 * @n: number that initializes the count
 *
 * Return: nothing
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');
		n++;
	}
	while (n >= 98)
	{
		_putchar(n + '0');
		n--;
	}
}
