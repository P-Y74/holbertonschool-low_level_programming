#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	long int num1 = 1, num2 = 2, nextNumber;
	int i;

	printf("%ld, ", num1);
	printf("%ld, ", num2);
	for (i = 3; i <= 50; i++)
	{
		nextNumber = num1 + num2;

		if (i != 50)
		{
			printf("%ld, ", nextNumber);
		}
		else
		{
			printf("%ld", nextNumber);
		}
		num1 = num2;
		num2 = nextNumber;
	}
	putchar('\n');
	return (0);
}
