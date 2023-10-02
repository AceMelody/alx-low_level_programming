#include "main.h"

/**
 * print_line - prints a line
 * @n: the length of the line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int k;

	for (k = 0; k <= n; k++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
