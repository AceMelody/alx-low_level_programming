#include "main.h"

/**
 * _puts - prints a string followed by a new lind to stdout
 * @str: points to the string that is printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
