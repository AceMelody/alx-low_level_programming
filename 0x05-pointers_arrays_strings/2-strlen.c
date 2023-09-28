#include "main.h"

/**
 * _strlen - gives the length of a srting
 * @s: points to the string whose length is determined
 *
 * Return: the length of the string
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
