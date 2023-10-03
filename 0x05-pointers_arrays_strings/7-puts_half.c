#include "main.h"

/**
 * puts_half - prints half of a string followed by a new line
 * @str - points to the string whose half is printed
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int k, n;

	k = _strlen(str) - 1;
	if (k % 2 == 0)
		k = k / 2;
	else
		k = (k - 1) / 2;
	for (n = k; str[n] != '\0'; ++n)
		_putchar(str[n]);
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
	int n = '0';

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
