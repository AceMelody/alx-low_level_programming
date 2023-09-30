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

	f = e % 10;
	_putchar(f);
	return (0);
}
