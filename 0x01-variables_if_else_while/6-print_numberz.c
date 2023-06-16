#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Convert digit to ASCII
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
