#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: the number of arguments
 * @argv: an array of tge arguments
 *
 * Return: 1, on error
 * 	0, on success
 */

int main (int argc, char *argv[])
{
	int n, x;

	n = argc - 1;
	if (n < 2 || n > 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		x = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", x);
		return (0);
	}
}
