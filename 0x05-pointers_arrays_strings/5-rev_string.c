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
	int f, v;

	v = _strlen(s) - 1;
	for (f = v; f >= 0; f--)
		_ putchar(*s[f]);
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
