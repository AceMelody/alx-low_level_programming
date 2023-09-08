#include <stdio.h>

/**
 * main - prints singledigit numbers of bade 10 from 0
 * @void: main does not take arguments
 *
 * Return: 0, success
 */

int main(void)
{
	int nm;

	for (nm = '0'; nm <= '9'; nm++)
		putchar(nm);
	putchar('\n');
	return (0);
}
