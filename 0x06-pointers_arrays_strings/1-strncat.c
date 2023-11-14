#include "main.h"

/**
 * _strcat - concatenates a specified size of a string to another
 * @ dest: the string that is concatenated to
 * @src: the string that is concatenated
 * @n: the size in bytes of the string that is concatenated
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src, int n)
{
	int length, m, p;

	length = _strlen(dest);
	dest[length] = ' ';
	for (m = length; *src != '\0'; ++m)
	{
		for (p = 0; p < n; p++)
		{
			dest[m] = src[p];
		}
	}
	return (dest);
}

/**
 * _strlen - gives the length of a string
 * @s: points to the string
 *
 * Return: the length ofthe string
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	
}
