#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @e: the number whose last digit is ptinted
 *
 * Return: 0, on success
 */

int print_last_digit(int e)
{
	_putchar(e % 10);
	return (e % 10);
}
