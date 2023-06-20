#include "main.h"
#include <unistd.h>

/**
 * _putchar - Output char c
 * @c: char to print
 *
 * Description: print all alphabet letters
 *
 * Return: 1 On succes, -1 On error
*/

int _putchar(char c)
{
        return (write(1, &c, 1));
}
