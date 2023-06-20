#include "main.h"

/**
 * _islower - check if char is lowercase
 *
 * @c: checks input
 *
 * Return: 1 if 'c' lowercase, always 0 (success)
 *
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
