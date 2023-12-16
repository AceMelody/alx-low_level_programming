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

	for (e = 0; e <= 9; e++)
	{
		for (f = 0; f <= 9; e++)
		{
			for (g = 0; g <= 9; g++)
			{
				for(h = 0; h <= 9; h++)
				{
					if (e < f && g < h)
					{
						if ((g == h == 0) && f > 0)
						{
							break;
						}
						else
						{
							putchar(e);
							putchar(f);
							putchar(' ');
							putchar(g);
							putchar(h);
						}
						if ((e == 9 && f < 9) || (e < 9 && f <= 9))
						{
							putchar(',');
							putchar(' ');
						}
						else
						{
							putchar('\n');
						}
					}
				}
			}
		}
	}
	return (0);
}
