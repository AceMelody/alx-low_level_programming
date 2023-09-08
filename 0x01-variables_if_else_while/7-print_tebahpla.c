#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 * @void: main takes no argument
 *
 * Return: 0, success
 */

int main(void)
{
	int hc;

	for (hc = 122; hc >= 97; hc--)
		putchar(hc);
	putchar('\n');
	return (0);
}
