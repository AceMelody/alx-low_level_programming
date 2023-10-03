#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: points to the string whose characters are printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (str % 2 == 0)
		{
			_putchar(*str);
			str++;
		}
	}
}
