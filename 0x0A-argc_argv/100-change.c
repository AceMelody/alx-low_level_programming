#include "main.h"

/**
 * main - prints the least number of coins that make up an amount of money
 * @argc: the number of arguments
 * @argv: an arraybof the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int amt, i, coins = 0, x[4] = {25, 10, 5, 1};

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (1);
	}
	amt = atoi(argv[1]);
	for (i = 0; i < 4; i++)
	{
		while (amt >= x[i])
		{
			coins++;
			amt -= x[i];
		}
	}
	printf("%d\n", coins);
	return (0);
}
