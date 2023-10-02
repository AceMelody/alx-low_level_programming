#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the line
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int f, r;

	if (n <= 0)
		_putchar('\n');
	for (f = 0; f < n; f++)
	{
		for (r = 0; r < f; r++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
