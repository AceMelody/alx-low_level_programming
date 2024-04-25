#include "main.h"

/**
 * _strcpy - copies the sring in  @src to the buffer pointed to by @dest
 * @src: points to the source string
 * @dest: points to where the string is copied
 *
 * Return: the string that is copied
 */

char *_strcpy(char *dest, char *src)
{
	int r;

	for (r = 0; src[r] != '\0'; r++)
	{
		dest[r] = src[r];
	}
	dest[r] = '\0';
	return (dest);
}
