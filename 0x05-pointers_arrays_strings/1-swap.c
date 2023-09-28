#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer's pointer
 * @b: the second integer's pointer
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
