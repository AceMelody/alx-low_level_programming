#include <stdio.h>

/**
 * main - prints the lowercase alphabet except for two letters
 * @void: main takes no arguments
 *
 * Return: 0, success
 */

int main(void)
{
	char qe;

	for (qe = 'a'; qe <= 'z'; qe++)
	{
		if ((qe != 'e') && (qe != 'q'))
		{
			putchar(qe);
		}
	}
	putchar('\n');
	return (0);
}
