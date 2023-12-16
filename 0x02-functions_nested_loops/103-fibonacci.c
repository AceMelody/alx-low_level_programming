#include <stdio.h>

/**
 * main - prints the sum of even fibonnaci numbers up to 4,000,000
 *
 * Return: 0, on success
 */
int main(void)
{
	int i, j = 1, k = 2, sum = 0, total = 0;

	total += k;
	for (i = 0; sum < 4000000; i++)
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
		if (j % 2 == 0)
			total += j;
	}
	printf("%d\n", total);

	return (0);
}
