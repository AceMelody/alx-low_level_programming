#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * @void: main takes no arguments
 *
 * Return: 0, success
 */

int main(void)
{
	char al;

	for (al = 97; al <= 122; al++)
		putchar(al);
	putchar('\n');
	return (0);
}
