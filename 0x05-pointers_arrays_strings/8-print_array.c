#include <stdio.h>

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
		printf("%d", *a);
		if (k < (n - 1))
			printf(", ");
		else
			printf("\n");
		a++;
	}
}
