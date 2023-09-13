#include "main.h"

/**
 * _isalpha - checks if input is an alphabetic character
 * @int c: input taken as the function's argument
 *
 * Return: 1, if c is a letter. 0, if c is not a letter
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
