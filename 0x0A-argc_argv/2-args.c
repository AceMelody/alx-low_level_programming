#include "main.h"

/**
 * main - prints the arguments the program receives
 * @argc: the number of arguments
 * @argv: an array of the arguments
 *
 * Return: 0, on success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
