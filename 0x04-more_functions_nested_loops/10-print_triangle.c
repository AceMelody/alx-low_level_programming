#include "main.h"

/**
 * main - prints a right-angled triangle
 * @size: the size of the triangle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int j, k;

	if (size <= 0)
		_putchar('\n');
	for (j = 0; j < size; j++)
	{
		for (k = 0; k < size; k++)
		{
			if (k == (size - (j + 1)))
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
