#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: nothing
 */

void print_alphabet(void)
{
	char et;

	for (et = 'a'; et <= 'z'; et++)
		_putchar(et);
	_putchar('\n');
	return;
}
