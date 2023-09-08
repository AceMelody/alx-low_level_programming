#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then uppercase
 * @void: main takes no arguments
 *
 * Return: 0, success
 */

int main(void)
{
	char als;

	for (als = 'a'; als <= 'z'; als++)
		putchar(als);
	for (als = 'A'; als <= 'Z'; als++)
		putchar(als);
	putchar('\n');
	return (0);
}
