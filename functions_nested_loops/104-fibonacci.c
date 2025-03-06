#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *	not allowed to use long long, malloc, pointers, arrays/tables,
 *	or structures
 *
 * Return: 0
 */
int main(void)
{
	long int num1High = 0, num1Low = 1;
	long int num2High = 0, num2Low = 2;
	long int high = 0, low = 0;
	int i;

	printf("%ld, ", num1Low);
	printf("%ld, ", num2High);

	for (i = 3; i <= 98; i++)
	{
		low = num1Low + num2Low;
		high = num1High + num2High;

		if (low >= 1000000000)
		{
			low -= 1000000000;
			high++;
		}
		if (high > 0)
		{
			printf("%ld%09ld", high, low);
		}
		else
		{
			printf("%ld", low);
		}
		if (i != 98)
		{
			printf(", ");
		}
		num1High = num2High;
		num1Low = num2Low;
		num2High = high;
		num2Low = low;
	}
	putchar('\n');
	return (0);
}
