#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int ph, k;

	for (k = '0'; k <= '9'; k++)
	{
		for (ph = 'a'; ph <= 'z'; ph++)
		{
			_putchar(ph);
		}
		_putchar('\n');
	}
}
