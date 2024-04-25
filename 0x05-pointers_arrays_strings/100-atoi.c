#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string to be converted
 *
 * Return: the converted number
 */

int _atoi(char *s)
{
	int num = 0, sign;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		sign = 1;
		s++;
	}
	while (*s != '\0')
		num = num * 10 + (*s - '0');

	return (sign * num);
}
