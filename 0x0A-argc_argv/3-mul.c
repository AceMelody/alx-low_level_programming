#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: the number of arguments
 * @argv: an array of the arguments
 *
 * Return: 0, on success
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
