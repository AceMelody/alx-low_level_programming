#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: points to the string that is to be printed in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	int v, i;

	v = _strlen(s) - 1;
	for (i = v; i >= 0; i--)
	{
		_putchar(&s[i]);
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
