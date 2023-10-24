#include <stdio.h>

/**
 * main - prints all the arguments this program receives
 * @argc: the number of arguments
 * @argv: an array of the arguments
 *
 * Return: 0, on success
 */

int main(int argc, char *argv[])
{
	int t;

	for (t = 0; t < argc; t++)
	{
		printf("%s\n",argv[t]);
	}
	return (0);
}
