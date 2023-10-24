#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into this program
 * @agrc: the number of arguments
 * @argv: an array of the arguments
 *
 * Return: 0, on success
 */

int main (int argc, char *argv[])
{
	int n;

	n = argc - 1;
	(void)argv;
	_putchar(n + '0');
	_putchar('\n');
	return(0);
}
