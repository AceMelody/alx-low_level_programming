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
	for (*s = '\0'; *s--; --*s)
	{
		_putchar(*s);
	}
}
