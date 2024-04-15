#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int v, k, w;

	v = _strlen(dest);
	dest[v] = ' ';
	for (k = v + 1; *src != '\0'; ++k)
	{
		for (w = 0; src[w] != '\0'; w++)
		{
			dest[k] = src[w];
		}
	}
	dest[k] = '\0';
	_putchar('\n');
	return (dest);
}
/**
 * _strlen - gives the length of a string
 * @s: points to the string
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
