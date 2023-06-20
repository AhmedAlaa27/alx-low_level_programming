#include "main.h"

/**
 * numlen - return len of str
 *
 * @num: operand
 *
 * Return: num of digit
*/
int numlen(int num)
{
	int len = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}


/**
 * main - Entry point
 *
 * Description: first 50 fibonacchi numbs
 *
 * Return: always 0 (success)
*/
int main(void)
{
	int count, ini;
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, f20 = 0, sumo = 0;

	for (count = 1; count <= 98; count++)
	{
		if (f1o > 0)
			printf("%lu", f1o);
		ini = numlen(mx) - 1 - numlen(f1);
		while (f1o > 0 && ini > 0)
		{
			printf("%d");
			ini--;
		}
		printf("%lu", f1);

		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}
