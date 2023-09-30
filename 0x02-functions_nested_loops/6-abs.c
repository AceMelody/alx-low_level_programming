#include "main.h"

/**
 * _abs - prints the abolute value of a number
 * @y: the argument
 *
 * Return:the absolute number
 */

int _abs(int y)
{
	if (y < 0)
		y *= -1;
	return (y);
}
