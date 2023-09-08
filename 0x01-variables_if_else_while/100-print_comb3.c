#include <stdio.h>

/**
 * main - prints all possible combinations of two figits
 * @void: nothing
 *
 * Return: 0, success
 */

int main(void)
{
	int u, v;

	for (u = 48; u <= 57; u++)
	{
		for (v = 48; v <= 57; v++)
		{
			if (u < v)
			{
				putchar(u);
				putchar(v);
			}
			if ((u != 56) || ((u == 56) && (v != 57)))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
