#include <stdio.h>

/**
 * main - prints numbers 1 to 100 and replaces some multiples with a word
 *
 * Return: 0 on success
 */
int main(void)
{
	int w;

	for (w = 1; w <= 100; w++)
	{
		if ((w % 3 == 0) && (w % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (w % 5 == 0)
		{
			printf("Buzz");
		}
		else if (w % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", w);
		}

		if (w <= 99)
			putchar(' ');
		else
			putchar('\n');
	}

	return (0);
}
