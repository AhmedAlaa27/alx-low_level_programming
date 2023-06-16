#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print value of n status:
 *		greater than, is zero and not less than 6
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of 491506926 is 6 and is greater than 5\n", n);
	else if (digit < 6 && digit != 0)
		printf("Last digit of %d is 2 and is less than 6 and not 0\n", n);
	else if (digit == 0)
		printf("Last digit of 809065140 is 0 and is 0\n", n);
	return (0);
}
