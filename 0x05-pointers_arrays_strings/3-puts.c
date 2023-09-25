#include "main.h"

/**
 * _puts - prints a string followed by a new lind to stdout
 * @*str- points to thestring that is printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	char s[] = *str;
	int r;

	for (r = '0'; s[r] != NULL; r++)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
