#include <stdio.h>

/**
 * main - prints the prime factor of 612852475143
 *
 * Retuen: 0 on success
 */
int main(void)
{
	int v = 2;
	long int n = 612852475143;

	while (n > 1)
	{
		if (n % v == 0)
		{
			printf("%d ", v);
			n /= v;
		}
		else
			v++;
	}
	putchar('\n');
	return (0);
}
