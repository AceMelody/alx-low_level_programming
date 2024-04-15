#include "main.h"

/**
 * _strncpy - copies a specified number of bytes of a string
 * @dest: where the string is copied to
 * @src: the string to be copied
 * @n: the number of bytes
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
