#include "main.h"

/**
 * _abs - prints tge abolute value of a number
 * @y : the argument
 *
 * Return : 0, on success
 */

int _abs(int y)
{
	if (y < '0')
		y *= -1;
	_putchar(y);
	return (0);
}
