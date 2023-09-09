#include <stdio.h>

/**
 * main - prints all posdible combinations of three digits
 * @void: nothing
 *
 * Return: 0, success
 */

int main(void)
{
	int n, m, p;

	for (n = 48; n <= 57; n++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (p = 48; p <= 57; p++)
			{
				if (n < m && m < p)
				{
					putchar(n);
					putchar(m);
					putchar(p);
					if (n != 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
