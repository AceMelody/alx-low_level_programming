#include "main.h"

/**
 * _strcmp - compares two srings
 * @s1: the first string
 * @s2: the other string
 *
 * Return: 0 on success, difference of s2 from s1 oherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *(s1 + i); i++)
	{
		if (*(s1 + i) == *(s2 + i))
			continue;
		else
			return (*(s1 + i) - *(s2 + i));
	}

	return (0);
}
