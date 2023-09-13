#include "main.h"

/**
 * main - prints string using putchar
 *
 * Return: 0 on success
 */

int main(void)
{
	char pt[] = "_putchar";
	int t;

	for (t = 0; pt[t] != '\0'; t++)
		_putchar(pt[t]);
	_putchar('\n');
	return (0);
}
