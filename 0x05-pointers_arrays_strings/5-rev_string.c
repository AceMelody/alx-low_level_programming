#include "main.h"

/**
 * rev_string - reverses a string
 * @s: points to the string
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int f, v, i = 0;
	char t;

	v = _strlen(s) - 1;
	for (f = v; f != 0; f--)
	{
		*(t + i) = s[f];
		i++;
	}
	*(t + i) = s[f];
	*s = *t;
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

#include <stdio.h>

int main(void)
{
	char s[] = "Hello progrwmming";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
