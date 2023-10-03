#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	for (*s = '\0'; s--; --s)
		_putchar(*s + '0');
}
