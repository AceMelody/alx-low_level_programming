#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 * @void: nothing
 *
 * Return: 0, success
 */

int main(void)
{
	int h;

	for (h = 48; h <= 57; h++)
	{
		putchar(h);
		if (h != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
