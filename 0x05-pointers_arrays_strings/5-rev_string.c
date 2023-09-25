#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to the string that is to be reversed
 *
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	char q[] = *s;
	int r;

	for (q[r] = NULL; q[r] >= q[0]; --r)
	{
		_putchar(q[r]);
	}
}
