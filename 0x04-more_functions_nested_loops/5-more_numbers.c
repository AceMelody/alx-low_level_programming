#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int v, w;

	for (v = '0'; v = '9'; v++)
	{
		for (w = 0; w <= 14; w++)
		{
			_putchar(w);
		}
		_putchar('\n');
	}
}
