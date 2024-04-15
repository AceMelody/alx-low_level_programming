#include "main.h"

/**
 * reverse_array - reverses the elements of an array
 * @a: the array
 * @n: the number of elemants of the array
 *
 * Return: nothing
 */

void reverse_ array(int *a, int n)
{
	int i, *b;

	for ( i = 0; i < n; i++)
		*(b + i) = *(a + (n - i));
	a = b;
}
