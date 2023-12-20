#include <stdio.h>

/**
 * main - prints the prime factor of 612852475143
 *
 * Retuen: 0 on success
 */
int main(void)
{
	int v = 2, k = v;
	long int n = 612852475143;

	while (n > 1)
	{
		if (n % v == 0)
		{
			n /= v;
			if (k < v)
			{
				k = v;
			}
		}
		else
			v++;
	}
	printf("%d\n", k);
	return (0);
}
