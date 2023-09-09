#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * @void: nothing
 *
 * Return: 0, success
 */

int main(void)
{
	int e, f, g, h;

	for (e = 48; e <= 57; e++)
	{
		for (f = 48; f <= 57; e++)
		{
			for (g = 48; g <= 57; g++)
			{
				for(h = 58; h <= 57; h++)
				{
					if (e < f && g < h)
					{
						putchar(e);
						putchar(f);
						putchar(' ');
						putchar(g);
						putchar(h);
						if (e == 57 && e + f + g + h != 227)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
