#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: points to the string whose characters are printed
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int w;

	for (w = '0'; str[w] !='\0'; w++)
	{
		if (w % 2 = 0)
		{
			_putchar(str[w]);
		}
		else
		{
			break;
		}
	}
}
