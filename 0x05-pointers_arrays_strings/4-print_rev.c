#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @*s: points to the string that is to be printed in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	char t[] = *s;
	int v;

	for (t[v] = NULL; t[v] >= t[0]; --v)
	{
		_putchar(t[v]);
	}
	_putchar('\n');
}
