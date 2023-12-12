#include <stdio.h>

/**
 * main - prints the sum of all multiples of 3 and 5 not exceeding and excluding 1024
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, sum = 0, v = 1024;

	for (i =  1; i < v; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
}
