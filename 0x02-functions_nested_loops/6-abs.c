#include "main.h"

/**
 * _abs - return abs of the value
 *
 * @n: integer takes
 *
 * Return: always 0 (success)
*/
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
