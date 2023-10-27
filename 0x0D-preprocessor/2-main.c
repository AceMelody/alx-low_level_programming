#include <stdio.h>

/**
 * main - prints the name  of this file after compilation
 *
 * Return: 0, on success
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
