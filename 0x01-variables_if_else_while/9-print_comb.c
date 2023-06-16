#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print nums of base16 in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 9;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
