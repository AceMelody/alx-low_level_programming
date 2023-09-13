#include "main.h"

/**
 * _islower - checks if @int c is a lowercase character
 * @int c: the argument that is checked
 *
 * Retun: 1, if c is lowercase. 0, otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
