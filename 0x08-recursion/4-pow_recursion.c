#include "main.h"

/**
 * _pow_recursion - computes the value of @x raised to the powrr of @y
 * @x: the number
 * @y: the power to which @x id computed
 *
 * Return: result of @x to the power of @y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x *= x;
		return (0 + _pow_recursion(x, y - 1));
	}
}
