#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int f, v, i;
	char p;

	v = _strlen(s) - 1;
	for (f = v, i = 0; f >= i; f--, i++)
	{
		p = *(s + i);
		*(s + i) = *(s + f);
		*(s + f) = p;
	}
}
/**
 * _strlen - gives the length of a string
 * @s: points to the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}
