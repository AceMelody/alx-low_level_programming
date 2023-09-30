#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @e: the number whose last digit is ptinted
 *
 * Return: 0, on success
 */

int print_last_digit(int e)
{
	int f;

	if (e < 0)
		e *= -1;
	f = e % 10;
	_putchar('0' + f);
	return (f);
}
