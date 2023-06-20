#include "main.h"

/**
 * _isalpha - checks is letter
 *
 * @c: input from other fun
 *
 * Return: 1 if char
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
