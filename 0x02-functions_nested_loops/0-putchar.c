#include "main.h"
#include <unistd.h>

/**
 * _putchar - Output char c
 * @c: char to print
 *
 * Description: print all alphabet letters
 *
 * Return: Always 0 (success)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
