#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str: points to the string whose half is printed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j, k;

	k = _strlen(str);
	if (k % 2 == 0)
		j = k / 2;
	else
		j = (k - 1) / 2;
	for (i = j; i < k; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
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

	while (*s)
	{
		n++;
		s++;
	}
	return (n);
}
