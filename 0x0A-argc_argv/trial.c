#include "main.h"

/**
 * main - prints the minimum number of coins that makes an amount
 * @argc: the number of arguments
 * @argv: an array of the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int amt, coins = 0;

	if (argc < 2)
	{
		printf("0");
		return (1);
	}
	amt = atoi(argv[1]);
	while (amt >= 25)
	{
		coins++;
		amt -= 25;
	}
	while (amt >= 10)
	{
		coins++;
		amt -= 10;
	}
	while (amt >= 5)
	{
		coins++;
		amt -= 5;
	}
	while (amt >= 1)
	{
		coins++;
		amt--;
	}
	printf("%d\n", coins);
	return (0);

}
