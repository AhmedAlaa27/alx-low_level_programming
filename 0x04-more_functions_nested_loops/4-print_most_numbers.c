#include "main.h"

/**
 * print_most_numbers - print nums from 0 - 9 expext 2, 4
*/

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(c);
	}
	_putchar('\n');

}
