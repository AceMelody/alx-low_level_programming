#include <stdio.h>

/**
 * main - prints the forst 50 fibonnaci numbers
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;
	long int sum = 0, j = 1, k = 2;

	printf("%.1ld, %.1ld, ", j, k);
	for (i = 0; i < 48; i++)
	{
		if (j < k)
		{
			sum = j + k;
			j = sum;
		}
		else
		{
			sum = j + k;
			k = j;
			j = sum;
		}
		printf("%ld", j);
		if (i < 47)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}

	return (0);
}
