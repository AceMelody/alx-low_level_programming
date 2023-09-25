#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @*str: points to the string whose characters are printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	char x[] = *str;
	int w;

	for (w = '0'; x[w] != NULL; w++)
	{
		if (w % 2 = 0)
		{
			_putchar(x[w]);
		}
		else
		{
			break;
		}
	}
}
