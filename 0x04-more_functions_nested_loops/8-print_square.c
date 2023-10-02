#include "main.h"

/**
 * print_square - prints a square
 * @size: the size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int length, width;

	for (width = 0; width < size; width++)
	{
		for (length = 0; length < size; length++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
