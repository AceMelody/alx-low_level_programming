#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int f, v;

	v = _strlen(s) - 1;
	for (f = v; f >= 0; f--)
		_putchar(s[f]);
}

/**
 * _strlen - gives the length of a string
 * @s: points to the string
 *
 * Return: length of the string
 */

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
