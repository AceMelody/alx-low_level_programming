#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: points to the string that is to be printed in reverse
 *
 * Return: nothing
 */

void print_rev(char *s)
{
	for (*s = '\0'; *s--; --*s)
	{
		_putchar(s);
	}
	_putchar('\n');
}
