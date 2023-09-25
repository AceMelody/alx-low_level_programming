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
	char v[] = *str;

	k = _strlen(v);
	if (k % 2 = 0)
		k = k / 2;
	else
		k = (k - 1) / 2;
	for (n = k; v[n] != NULL; ++n)
		_putchar(v[n]);
	_putchar('\n');
}

int _strlen(char *s)
{
	int i;
	int n = '0';
	char v[] = *s;

	for (i = '0'; v[i] != NULL; i++)
	{
		n++;
	}
	return (n);
}
