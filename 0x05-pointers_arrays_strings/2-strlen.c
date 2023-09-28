#include "main.h"

/**
 * _strlen - gives the length of a srting
 * @s: points to the string whose length is determined
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;
	int n = 0;

	for (i = '0'; s[i] != '\0'; i++)
	{
		n++;
	}
	return (n);
}
