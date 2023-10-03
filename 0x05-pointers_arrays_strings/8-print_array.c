#include <stdio.h>
#include "main.h"

/**
 * print_array - prints @n elements ofthe @a array
 * @a: the array
 * @n: the number of elements to be printed
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		printf("%d", *(a + k));
		if (k < (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
