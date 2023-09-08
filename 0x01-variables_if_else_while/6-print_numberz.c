#include <stdio.h>

/**
 * main - prints single digit numbers
 * @void: main takes no arguments
 *
 * Return: 0, success
 */

int main(void)
{
	int k;

	for (k = 48; k <= 57; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
