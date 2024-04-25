#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: points to the string whose characters are printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int w = 0;

	while (*(str + w) != '\0')
	{
		if (w % 2 == 0)
		{
			_putchar(*(str + w));
		}
		w++;
	}
	_putchar('\n');
}
