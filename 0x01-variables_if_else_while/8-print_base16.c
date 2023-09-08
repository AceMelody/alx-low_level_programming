#include <stdio.h>

/**
 * main - prints hexadecimal numbers in lowercase
 * @void: nothing
 *
 * Return: 0, success
 */

int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
