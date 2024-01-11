#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	while (*s != '\0')
	{
		++s;
		_puts_recursion(s);
	}
}
